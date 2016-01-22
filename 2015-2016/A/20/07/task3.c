#include <stdio.h>
 
int main ()
{
 
	int input;
 	int count = 0, hex[10], i, rev, temp;
	scanf("%d", &input);
 
 	for(; count != i/2; input++)
    {
    	temp = input;
      	for(count = 0; temp > 0; count++)
       	{ 
        	hex[count] = temp % 16; 
        	temp /= 16;  
       	}
     
      	i = count;
      	rev = i - 1;
  
  		for(count = 0; count < i/2; count++, rev--)
       	{
       		if(hex[count] != hex[rev])
       		{
        		break;
        	}	
       }
    }
 
 
   	for(count = 0; count < i; count++)
    {
      	switch(hex[count])
       	{
        case 10: printf("A"); break;
        case 11: printf("B"); break;
        case 12: printf("C"); break;
        case 13: printf("D"); break;
        case 14: printf("E"); break;
        case 15: printf("F"); break;
        default: printf("%d", hex[count]); break;

       }
    }
    printf("\n");
}


