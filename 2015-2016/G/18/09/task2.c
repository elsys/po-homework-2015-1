#include <stdio.h>
#include <string.h>

int main()
{

	char n[160];
	int l,i,button=0;
	
	scanf("%[^\n]s",n);
	l = strlen(n);
	for(i = 0; i < l; i++)
		{
			if(n[i] == 'a') button = button + 1;
			if(n[i] == 'd') button = button + 1;
			if(n[i] == 'g') button = button + 1;
			if(n[i] == 'j') button = button + 1;
			if(n[i] == 'm') button = button + 1;
			if(n[i] == 'p') button = button + 1;
			if(n[i] == 't') button = button + 1;
			if(n[i] == 'w') button = button + 1;
			if(n[i] == ' ') button = button + 1;

			if(n[i] == 'b') button = button + 2;
			if(n[i] == 'e') button = button + 2;
			if(n[i] == 'h') button = button + 2;
			if(n[i] == 'k') button = button + 2;
			if(n[i] == 'n') button = button + 2;
			if(n[i] == 'q') button = button + 2;
			if(n[i] == 'u') button = button + 2;
			if(n[i] == 'x') button = button + 2;

			if(n[i] == 'c') button = button + 3;
			if(n[i] == 'f') button = button + 3;
			if(n[i] == 'i') button = button + 3;
			if(n[i] == 'l') button = button + 3;
			if(n[i] == 'o') button = button + 3;
			if(n[i] == 'r') button = button + 3;
			if(n[i] == 'v') button = button + 3;
			if(n[i] == 'y') button = button + 3;

			if(n[i] == 's') button = button + 4;
			if(n[i] == 'z') button = button + 4;
		}
	printf("button klicks = %d \n", button);
	return 0;
}
