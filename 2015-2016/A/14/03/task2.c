#include <string.h>
#include <stdio.h>

int main()

{
char str[50],rts=0;
int k=0,n=0;
scanf("%s", str);
n=strlen(str)-1;

while(k<n)
	{
		rts=str[k];
		str[k]=str[n];
		str[n]=rts;
		k++;
		n--;
	}
printf("%s",str);
return (0);
}
