#include <stdio.h>
#include <math.h>

void exact_square (int number);

int main()
{
    int number;

    scanf("%d",&number);
    exact_square(number);

    return 0;
}
 void exact_square (int number)
{
   // int temp;
   // temp = sqrt(number);
   int sqrt;

   for(sqrt = 0; sqrt <= number; sqrt++)
    {
        if (number == sqrt * sqrt)
        {
            printf("1");
	    return;
           
        }
    }
    printf("0");


}

