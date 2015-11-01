#include <stdio.h>
#include <string.h>

int main()
{
	char str[300];
	int l,sum;
		
	printf("\nNote: numbers other than C,L,X,V,I and that are not Roman will be excluded from the calculations.\n");
	printf("Enter Number:");
	fgets(str,300,stdin);

	l=strlen(str)-1;
	sum=0;
	for(;l>=0;l--)
		{
			if(str[l]=='I' && (str[l+1]=='V' || str[l+1]=='X' || str[l+1]=='L' || str[l+1]=='C')) sum--;
			else if(str[l]=='I') sum++;
			else if(str[l]=='V') sum+=5;
			else if(str[l]=='X') sum+=10;
			else if(str[l]=='L') sum+=50;
			else if(str[l]=='C') sum+=100;
			
		}
	printf("Number in decimal: %d\n\n", sum);

return 0;
}
