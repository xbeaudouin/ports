--- src/3rdparty/chromium/net/dns/dns_reloader.cc.orig	2021-12-15 16:12:54 UTC
+++ src/3rdparty/chromium/net/dns/dns_reloader.cc
@@ -7,6 +7,10 @@
 #if defined(OS_POSIX) && !defined(OS_APPLE) && !defined(OS_OPENBSD) && \
     !defined(OS_ANDROID) && !defined(OS_FUCHSIA)
 
+#if defined(OS_FREEBSD)
+#include <netinet/in.h>
+#endif
+
 #include <resolv.h>
 
 #include "base/lazy_instance.h"
