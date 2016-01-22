#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter,counter_2=0,number,i=0,a=0,deer[200];

     scanf("%d",&number);

    for(counter=0;counter<number;counter++){
        scanf("%d",&deer[counter]);
        deer[counter+1] = 0;
    }

   for(counter = 0;counter < number;counter++,i=0,counter_2=0){
        while (counter_2 <= number){
            if (deer[counter] == deer[counter_2]){ i++;}
            if(counter_2 == number && i<=1) {a = deer[counter];}
             counter_2++;
        }}
        printf("\n%d",a);

return 0;
    }
