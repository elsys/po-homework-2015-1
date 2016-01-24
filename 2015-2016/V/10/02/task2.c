#include<stdio.h>
#include<string.h>
int main()
{
	char dumi[100];
	while(1)
{
	scanf("%s",dumi);
	int lenght = strlen(dumi);
	if(dumi[0] == 'S' && dumi[1] == 'T' && dumi[2] == 'O' && dumi[3] == 'P' && dumi[4] == '\0')
	{
		break;
	}
	int i;
	for(i=0; i<lenght; i++)
	{
		
		if(dumi[i] >= 'a' && dumi[i] <= 'z')
		{
			dumi[i] -= 32;
		}	
	}	
	
	printf("%s",dumi);
}



return 0;
}
