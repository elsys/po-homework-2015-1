#include <stdio.h>
#include <string.h>

int main()
{
    char palindrom[100];
    printf("vuvedete string \n");
    scanf("%s",palindrom);

    int StringLenght = strlen(palindrom);
    int counter = 0;
    int flag = 1;

    for(;counter < StringLenght/2 ;counter ++)
    {
        if(palindrom[StringLenght - counter - 1] != palindrom[counter])
        {
            flag = 0;
			break;
        }
    }
    if(flag)
	{
		printf("1 \n");
	}
	else
    {
		printf("0 \n");
	}

    return 0;
}
