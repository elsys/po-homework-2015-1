#include <stdio.h>

int main()
{
    int i;
    char in[1025];
    scanf("%s",in);
    reverse(in);
    return 0;
}

int reverse(char *a)
{
   if(*a!='\0')
   {
     reverse(a+1);
   }
   printf("%c",*a);
}
