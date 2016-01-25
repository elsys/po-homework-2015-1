#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, numbers[50]={0}, c;
	scanf("%d", &num);
		
	while(num!=0)
	{
		numbers[num%10]++;
		num/=10;
	}

 	for(c=0; c<10; c++)
 	{
  		if(numbers[c]!=0)
        	{
            	printf("%d is found %d times \n", c, numbers[c]);
        	}
        }


	return 0;
}
