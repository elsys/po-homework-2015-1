#include <stdio.h>
#include <string.h>

int main() 
{
	
	char str[100], t;
	int l, i;
	scanf("%[^\n]s", str);

	l = strlen(str) - 1 ;

	for(i = 0; i <= l; i++, l--)
	{
		t = str[i];
		str[i] = str[l];
		str[l] = t;
	}	

	printf("%s \n\n", str);
	return 0;

}