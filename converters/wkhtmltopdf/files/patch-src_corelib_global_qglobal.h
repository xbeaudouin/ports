--- src/corelib/global/qglobal.h.orig	2023-11-20 11:36:42 UTC
+++ src/corelib/global/qglobal.h
@@ -2482,22 +2482,32 @@ typedef uint Flags;
 
 #endif /* Q_NO_TYPESAFE_FLAGS */
 
-#if defined(Q_CC_GNU) && !defined(Q_CC_INTEL) && !defined(Q_CC_RVCT)
+#if (defined(Q_CC_GNU) && !defined(Q_CC_RVCT))
 /* make use of typeof-extension */
 template <typename T>
 class QForeachContainer {
 public:
-    inline QForeachContainer(const T& t) : c(t), brk(0), i(c.begin()), e(c.end()) { }
+    inline QForeachContainer(const T& t) : c(t), i(c.begin()), e(c.end()), control(1) { }
     const T c;
     int brk;
     typename T::const_iterator i, e;
+    int control;
 };
 
+// Explanation of the control word:
+//  - it's initialized to 1
+//  - that means both the inner and outer loops start
+//  - if there were no breaks, at the end of the inner loop, it's set to 0, which
+//    causes it to exit (the inner loop is run exactly once)
+//  - at the end of the outer loop, it's inverted, so it becomes 1 again, allowing
+//    the outer loop to continue executing
+//  - if there was a break inside the inner loop, it will exit with control still
+//    set to 1; in that case, the outer loop will invert it to 0 and will exit too
 #define Q_FOREACH(variable, container)                                \
 for (QForeachContainer<__typeof__(container)> _container_(container); \
-     !_container_.brk && _container_.i != _container_.e;              \
-     __extension__  ({ ++_container_.brk; ++_container_.i; }))                       \
-    for (variable = *_container_.i;; __extension__ ({--_container_.brk; break;}))
+     _container_.control && _container_.i != _container_.e;         \
+     ++_container_.i, _container_.control ^= 1)                     \
+     for (variable = *_container_.i; _container_.control; _container_.control = 0)
 
 #else
 
