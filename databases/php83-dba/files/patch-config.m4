--- config.m4.orig	2023-11-07 20:02:05 UTC
+++ config.m4
@@ -387,6 +387,14 @@ if test "$PHP_DB4" != "no"; then
       THIS_PREFIX=$i
       THIS_INCLUDE=$i/include/db5.3/db.h
       break
+    elif test -f "$i/include/db5/db.h"; then
+      THIS_PREFIX=$i
+      THIS_INCLUDE=$i/include/db5/db.h
+      break
+    elif test -f "$i/include/db18/db.h"; then
+      THIS_PREFIX=$i
+      THIS_INCLUDE=$i/include/db18/db.h
+      break
     elif test -f "$i/include/db5.1/db.h"; then
       THIS_PREFIX=$i
       THIS_INCLUDE=$i/include/db5.1/db.h
@@ -429,7 +437,7 @@ if test "$PHP_DB4" != "no"; then
       break
     fi
   done
-  PHP_DBA_DB_CHECK(4, db-5.3 db-5.1 db-5.0 db-4.8 db-4.7 db-4.6 db-4.5 db-4.4 db-4.3 db-4.2 db-4.1 db-4.0 db-4 db4 db, [(void)db_create((DB**)0, (DB_ENV*)0, 0)])
+  PHP_DBA_DB_CHECK(4, db-5 db-5.3 db-5.1 db-5.0 db-4.8 db-4.7 db-4.6 db-4.5 db-4.4 db-4.3 db-4.2 db-4.1 db-4.0 db-4 db-18 db4 db, [(void)db_create((DB**)0, (DB_ENV*)0, 0)])
 fi
 PHP_DBA_STD_RESULT(db4,Berkeley DB4)
 
