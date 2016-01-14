#include <stdio.h>
int main()  
{  
    int deers[100];
    int rudolf[100];  
    int deer;
    int helper;
    int count;
    int counter;   
    scanf("%d", &deer); 
 
 if(deer % 2 == 0 )printf("enter odd deer");
     for(helper = 0; helper < deer; helper ++)  
    {  
        scanf("%d", &deers[helper]);  
        rudolf[helper] = -1;  
    }  
  
    for(helper = 0; helper < deer; helper++)  
    {  
        counter = 1;  
        for(count=helper + 1; count < deer; count++)  
        {  
            if(deers[helper] == deers[count])  
            {  
                counter++;  
                rudolf[count] = 0;  
            }  
        }  
  
        if(rudolf[helper] != 0)  
        {  
            rudolf[helper] = counter;  
        }  
    }  
   
    for(helper = 0; helper < deer; helper++)  
    {  
        if(rudolf[helper] == 1)  
        {  
            printf("%d\n", deers[helper]);  
        }  
    }  
  
    return 0;  
}
