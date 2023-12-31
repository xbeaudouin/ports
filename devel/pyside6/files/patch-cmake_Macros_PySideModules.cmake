--- cmake/Macros/PySideModules.cmake.orig	2023-10-14 09:37:51 UTC
+++ cmake/Macros/PySideModules.cmake
@@ -107,7 +107,7 @@ macro(create_pyside_module)
     get_target_property(qt_core_includes Qt${QT_MAJOR_VERSION}::Core
                         INTERFACE_INCLUDE_DIRECTORIES)
     set(shiboken_include_dir_list ${pyside6_SOURCE_DIR} ${qt_platform_includes}
-        ${qt_core_includes})
+        ${qt_core_includes} ${CMAKE_INSTALL_PREFIX}/include)
 
     # Transform the path separators into something shiboken understands.
     make_path(shiboken_include_dirs ${shiboken_include_dir_list})
