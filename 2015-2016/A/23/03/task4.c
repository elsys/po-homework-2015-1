#include<stdio.h>
#include<string.h>

int getromanv(char);

int main()
{

    	char r[10];
   	int i=0;
    	int number=0;
    	scanf("%s",r);
    	
	while(r[i])
	{

		if (number<0)
		{
		    printf("Invalid number\n");
		    return 0;
		}
		if(getromanv(r[i]) >= getromanv(r[i+1]))
		{
		    	number = number + getromanv(r[i]);
		}
	  	else
		{
		     	number = number + (getromanv(r[i+1]) - getromanv(r[i]));
		    	i++;
		}
		i++;
    	}
    printf("%d",number);
    return 0;

}

int getromanv(char c)
{
    int s=0;
    switch(c)
	{
		case 'I': s = 1; 
		break;
		case 'V': s = 5; 
		break;
		case 'X': s = 10; 
		break;
		case 'L': s = 50; 
		break;
		case 'C': s = 100; 
		break;
		case '\0': s = 0; 
		break;
 	}
    return s;
}
