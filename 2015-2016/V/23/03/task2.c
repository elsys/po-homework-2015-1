#include <stdio.h>
#include <string.h>
 
int main()
{
   char arr[100];
   scanf("%s", arr);
 
   strrev(arr);
 
   printf("%s", arr);
 
   return 0;
}