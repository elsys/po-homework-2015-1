#include <stdio.h>
#include <stdlib.h>

int mstrlen(const char*);

int main()
{
	char* buffer;  
	int i = 0;
	do {
	scanf("%ms", &buffer); // m means to dynamically allocate memory for the string!Requires to be freed thereafter
	if(buffer[0] == 'S' && buffer[1] == 'T' && buffer[2] == 'O' && buffer[3] == 'P') // too lazy to write strcmp
		break;
	for(i = 0; i <= mstrlen(buffer); i++)
	{
		if((buffer[i] >= 97) && (buffer[i] <= 122))
			buffer[i] -= 32;
	}
	printf("%s ",buffer);
	free(buffer);
	} while(1);
	return 0;
}

int mstrlen(const char* string)
{
        const char *buff;

        for (buff = string; *buff; ++buff);
        return (buff - string);
}
