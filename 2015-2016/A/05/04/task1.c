#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int str_into_int(char* input)
{
	int i,number,length;
	length=strlen(input)-1;

	for(i=0,number=0;i<length;i++)
     {
		number+=input[i]-'0';

		 if(i!=length-1)
            {
                number*=10;
            }
	 }

	 return number;
}

int is_prime(char string[10])
{
    int number,i,len;
	len =strlen(string)-1;
	for(i=0; i<len; i++)
    {
		if(string[i]<'0' || string[i]>'9')
        {
			printf("-1");
			return -1;
		}
	}
	number=str_into_int(string);

    if(number==0 || number==1)
    {
    printf("0");
    return 0;

    }
    for(i=2;i<number;i++){
		if(number%i==0)
        {
            printf("0");
            return 0;
        }
	}
	printf("1");
    return 1;
}

int main(void)
{
    char string[10];
    fgets(string,10,stdin);
    is_prime(string);
    return 0;
}
