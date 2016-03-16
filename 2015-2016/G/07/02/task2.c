#include <stdio.h>
#include <string.h>

char* find(char *, char);

int main()
{
	char haystack[400], needle;
	char *i = 0;

	scanf("%[^\n]s",haystack);
	getchar();
	scanf("%c",&needle);

	if(find(haystack ,needle) == NULL){
		printf("-1\n");
	}
	else{
		i = find(haystack ,needle);
		printf("%d\n",(int)(i - haystack));
	}

	return 0;
}

char* find(char *haystack, char needle)
{
	int counter = 0;
		
	while(haystack[counter] != '\0'){
		if(haystack[counter] == needle){
			return &haystack[counter];
		}
		counter ++;
	}
	return NULL;
}
