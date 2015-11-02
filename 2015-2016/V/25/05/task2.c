#include <stdio.h>
#include <string.h>
int main()
{
	char Duma[100];
    	int l,c;
    	printf("Vuvedete duma:\n");
    	scanf("%s",Duma);
    	l=strlen(Duma);
    	int f=1;
    	for(c=0;c<l/2 && f;c++) 
        {
        	if(Duma[c]!=Duma[l-c-1])
        	{
            		f=0;
            		break;
        	}
    	}
    	if(f)
    	{
        	printf(" 1 \n");
    	}
    	else
	{
        	printf(" 0 \n");
    	}
}
