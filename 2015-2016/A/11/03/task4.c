#include <stdio.h>
#include <string.h>

int digitValue(char);

int main()
{

    char roman_Number[10];
    int i = 0;
    int number = 0;

    scanf("%s", roman_Number);

    while(roman_Number[i])
        {

         if(digitValue(roman_Number[i]) < 0)
            {
             printf("Error!");
             return 0;
            }

         if((strlen(roman_Number) - i) > 2)
            {
             if(digitValue(roman_Number[i]) < digitValue(roman_Number[i+2]))
             {
                 printf("Error!");
                 return 0;
             }
            }

         if(digitValue(roman_Number[i]) >= digitValue(roman_Number[i+1]))
             number = number + digitValue(roman_Number[i]);
         else
            {
             number = number + (digitValue(roman_Number[i+1]) - digitValue(roman_Number[i]));
             i++;
            }
         i++;
        }

    if(number > 256)
    {
        printf("Number is higher than 256!");
        return 404;
    }
    printf("%d", number);

    return 0;

}

int digitValue(char c)
{
    int value=0;

    switch(c)
    {
         case 'I': value = 1; break;
         case 'V': value = 5; break;
         case 'X': value = 10; break;
         case 'L': value = 50; break;
         case 'C': value = 100; break;
         case '\0': value = 0; break;
         default: value = -1;
    }

    return value;
}
