#include <stdio.h>
 
int exact_sqare(int number)
{
   int a;
    for(a = 0; a <= number; a++)
    {
        if (number == a * a)
        {
 
            return 1;
        }
    }
   return 0;
}
 
int main()
{
    int number;
    scanf("%d", &number);
   printf("%d",exact_sqare(number));
    return 0;
}
