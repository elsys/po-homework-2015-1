#include <stdio.h>

#include <string.h>

int main () {

	char str[140];
	
	int l,j;
	
	scanf("%[^\n]s",str);
	
	l = strlen(str);

	for(j = l - 1;j >= 0;j--)
		{
			printf("%c",str[j]);
		}
	
	return 0;
}
