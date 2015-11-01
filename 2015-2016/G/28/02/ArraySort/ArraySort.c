#include <stdio.h>
int main(void)
{
    int array[1000];
    int WantedDigits, counter, DigitDisplayCounter;
    int DigitsOfANuumber;

    printf("Enter How Many Digits Do You Want");scanf("%d", &DigitsOfANuumber);
    for(WantedDigits=0; WantedDigits < DigitsOfANuumber; WantedDigits ++)
       {
         scanf("%d", & array[WantedDigits]);
           if (array[WantedDigits] == 42)
                {
                    printf("You enterned the number 42,the  program now will terminate");
                    return;
                }
       }
            for(WantedDigits=0; WantedDigits < DigitsOfANuumber; ++ WantedDigits)
                {
                   for(counter = DigitsOfANuumber-1; counter > WantedDigits; counter--)
                      {
                         if(array[counter-1] > array[counter])
                            {
                                DigitDisplayCounter = array[counter-1];
                                array[counter-1] = array[counter];
                                array[counter] = DigitDisplayCounter;
                   }
                }
             }
        for(DigitDisplayCounter=0; DigitDisplayCounter<DigitsOfANuumber; DigitDisplayCounter++)
        {
            printf("The Digt Is %d\n", array[DigitDisplayCounter]);
        }
        return 0;
}
