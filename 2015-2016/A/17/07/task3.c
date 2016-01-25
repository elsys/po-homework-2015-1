#include <stdio.h>

int is_palindrome(int);

int main()
{
    int num=0;
    scanf("%d",&num);

    for(; is_palindrome(num) == 0 ;num++);

    printf("%X", num);


    return 0;
}
int is_palindrome(int num)
{
    char helper_hex[50];
    int i = 0,end = 0,middle = 0,begin = 0;

    sprintf(helper_hex, "%x",num);

     while (helper_hex[i] != '\0')
      i++;

   end = i - 1;
   middle = i/2;

   for (begin = 0; begin < middle; begin++)
   {
      if (helper_hex[begin] != helper_hex[end])
      {
         return 0;
      }
      end--;
   }

    return 1;
}

