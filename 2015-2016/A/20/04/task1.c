#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_prime();

int main()
{
	char number[20];

	scanf("%s", number);

	is_prime(number);

	printf("%d \n", is_prime());

	return 0;
}

int is_prime(char number[20])
{
	int IntEq=0, cnt, flag=1;

	for(cnt = 0; cnt <= strlen(number); cnt++)
	{
		if(number[cnt] >= '0' && number[cnt] <= '9')
		{
			IntEq = IntEq + (number[cnt] - '0');
			
			if(cnt < strlen(number) - 1)
			{
				IntEq = IntEq*10;
			}
		}
		else
		{
			flag = -1;
			break;
		}

	}

	for(cnt=2;cnt<=IntEq/2;cnt++)
  	{
    	if(IntEq%cnt==0)
    	{
        	flag = 0;
			break;
        }
        else
        {
      		flag = 1;
      		break;
      	}
  }
	return flag;
}