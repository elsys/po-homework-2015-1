#include <stdio.h>
void reverse(char *a);

int main()
{
    char in[1025];
    scanf("%s",in);
    reverse(in);
    return 0;
}

void reverse(char *a)
{
   if(*(a+1)!='\0')
   {
     reverse(a+1);
   }
   printf("%c",*a);
}
