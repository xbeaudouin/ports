--- chrome/browser/ui/views/eye_dropper/eye_dropper_view_aura.cc.orig	2023-10-21 11:51:27 UTC
+++ chrome/browser/ui/views/eye_dropper/eye_dropper_view_aura.cc
@@ -127,7 +127,7 @@ void EyeDropperView::MoveViewToFront() {
 }
 
 void EyeDropperView::CaptureInputIfNeeded() {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // The eye dropper needs to capture input since it is not activated
   // in order to avoid dismissing the color picker.
   GetWidget()->GetNativeWindow()->SetCapture();
