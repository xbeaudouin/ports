--- attrdict/mixins.py.orig	2019-02-01 22:18:30 UTC
+++ attrdict/mixins.py
@@ -2,7 +2,7 @@
 Mixin Classes for Attr-support.
 """
 from abc import ABCMeta, abstractmethod
-from collections import Mapping, MutableMapping, Sequence
+from collections.abc import Mapping, MutableMapping, Sequence
 import re
 
 import six
