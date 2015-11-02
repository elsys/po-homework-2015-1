+#include <stdio.h>
+#include <string.h>
+int main()
+{
+int ok=1,j,i=0;
+printf("Vuvedete tekst:");
+
+char s[100];
+scanf("%s",s);
+j=strlen(s)-1;
+while(i<j){
+ if (s[i]!=s[j]) {ok=0; break;}
+ i++; j--;
+}
+if (ok==1) printf("1");
+else printf("0");
+return 0;
+
+
+}
