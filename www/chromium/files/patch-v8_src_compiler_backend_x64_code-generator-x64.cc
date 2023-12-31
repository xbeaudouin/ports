--- v8/src/compiler/backend/x64/code-generator-x64.cc.orig	2023-11-03 10:09:45 UTC
+++ v8/src/compiler/backend/x64/code-generator-x64.cc
@@ -6852,11 +6852,11 @@ void CodeGenerator::AssembleArchTableSwitch(Instructio
     // target = table + (target - table)
     __ addq(input, kScratchRegister);
     // Jump to the target.
-    __ jmp(input);
+    __ jmp(input, /*notrack=*/true);
   } else {
     // For non builtins, the value in the table is 'target_address' (8 bytes)
     // jmp [table + index*8]
-    __ jmp(Operand(kScratchRegister, input, times_8, 0));
+    __ jmp(Operand(kScratchRegister, input, times_8, 0), /*notrack=*/true);
   }
 }
 
