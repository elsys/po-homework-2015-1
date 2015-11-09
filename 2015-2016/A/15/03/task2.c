#include <stdio.h>
#include <string.h>

int main()
{
	char input[50], output[50];
	int length, i;
	printf("Input your string:\n");
	scanf("%s", input);
	length = strlen(input);
	
	for(i=0;i<length; i++) //-i-1 because of terminating character
		output[i]=input[length-i-1];
	
	printf("%s\n", output);
	return 1;
}
