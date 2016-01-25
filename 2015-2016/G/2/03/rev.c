+#include <stdio.h>
void reverse();
int main(void) {
reverse();
printf("\n");
return 0;
}
void reverse() {
char ch;
scanf("%c", &ch);
if(ch == 10)
 return 0;
reverse();
printf("%c", ch);
 }
