#include <stdio.h>
int MagicCube(int input,int multidimentionalArray[input][input]);

int main()
{
    int input;
    printf("Input Lenght Of the multidimentional array");scanf("%d",&input);

    int multidimentionalArray[input][input];
    int arrayCounter = 0;
    for(arrayCounter = 0; arrayCounter < input; arrayCounter++)
    {
        int secondCounter = 0;
        for(secondCounter = 0; secondCounter < input; secondCounter++)
        {
            printf("Input Digits -->");
            scanf("%d",&multidimentionalArray[arrayCounter][secondCounter]);
            printf("\n");
        }
    }

    if(MagicCube(input,multidimentionalArray))
    {
        printf("The Cube Is Magical\n");
    }
    else
    {
        printf("The Cube is Not Magical\n");
    }
}

int MagicCube(int input,int multidimentionalArray[input][input])
{
    int firstSum = 0;
    int secondSum = 0;
    int counter = 0;
    for(counter = 0;counter < input; counter++)
    {
        int SecondCounter;
        for(SecondCounter = 0;SecondCounter < input; SecondCounter++)
        {
            firstSum += multidimentionalArray[counter][SecondCounter];
        }
        if(counter==0)
        {
           secondSum = firstSum;
        }
       if(firstSum != secondSum)
       {
   
            return 0;
      }
        firstSum = 0;
    }
    firstSum = 0;

    for(counter=0; counter<input; counter++)
    {
        firstSum += multidimentionalArray[counter][counter];
    }
   if(firstSum != secondSum)
   {    
       return 0;
   }
    firstSum= 0;

    int SecondCounter;

    for(counter=0,SecondCounter=input-1 ;counter< input; counter++,SecondCounter--)
    {
        firstSum += multidimentionalArray[counter][SecondCounter];
    }
   if(firstSum != SecondCounter)
   {
        
        return 0;
  }
    return 1;
}


