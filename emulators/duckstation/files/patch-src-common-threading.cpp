Fix get_thread_time() declaration on FreeBSD

--- src/common/threading.cpp.orig	2023-10-16 12:57:57 UTC
+++ src/common/threading.cpp
@@ -64,7 +64,7 @@ static u64 getthreadtime(thread_port_t thread)
 }
 #endif
 
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
 // Helper function to get either either the current cpu usage
 // in called thread or in id thread
 static u64 get_thread_time(void* id = 0)
@@ -227,7 +227,7 @@ u64 Threading::ThreadHandle::GetCPUTime() const
   return user.u64time + kernel.u64time;
 #elif defined(__APPLE__)
   return getthreadtime(pthread_mach_thread_np((pthread_t)m_native_handle));
-#elif defined(__linux__)
+#elif defined(__linux__) || defined(__FreeBSD__)
   return get_thread_time(m_native_handle);
 #else
   return 0;
