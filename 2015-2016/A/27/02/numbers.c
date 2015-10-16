#include <stdio.h>
void enterNumbers(void);
void sortArray(void);
void showNumbers(void);
int number,numbers[1000];
int main()
{
    enterNumbers();
    sortArray();
    showNumbers();
    return 0;
}
void enterNumbers(void)
{
    int counter;
    do{
        printf("How many numbers? ");
        scanf("%d",&number);
    }while(number<0||number>1000);
    for(counter=0;counter<number;counter++)
    {
        printf("No %d: ",counter+1);
        scanf("%d",&numbers[counter]);
        if(numbers[counter]==42)
        {
            number=counter+1;
            break;
        }
    }
}
void sortArray(void)
{
    int element,sorted,counter;
    for(counter=0;counter<number;counter++)
    {
        sorted=1;
        for(element=0;element<(number-1);element++)
        {
            if(numbers[element]>numbers[element+1])
            {
                sorted=0;
                numbers[element]=numbers[element]+numbers[element+1];
                numbers[element+1]=numbers[element]-numbers[element+1];
                numbers[element]=numbers[element]-numbers[element+1];
            }
        }
        if(sorted) break;
    }
}
void showNumbers(void)
{
    int counter;
    for(counter=0;counter<number;counter++) printf("\n%d",numbers[counter]);
}
