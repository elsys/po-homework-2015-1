#include <stdio.h>
#include <string.h>

int main()
{
	int counter = 0, clicks = 0, l = 0;
	char sms[160];
		
	scanf("%[^\n]s", sms);
	
	l = strlen(sms);

	for(counter = 0; counter < l; counter++)	
	{
		switch(sms[counter])
		{
			case 'a': clicks += 1; break; 
			case 'd': clicks += 1; break;
			case 'g': clicks += 1; break;
			case 'j': clicks += 1; break;
			case 'm': clicks += 1; break;
			case 'p': clicks += 1; break;
			case 't': clicks += 1; break;
			case 'w': clicks += 1; break;	
			case ' ': clicks += 1; break;
			case 'b': clicks += 2; break;	
			case 'e': clicks += 2; break;
			case 'h': clicks += 2; break;
			case 'k': clicks += 2; break;
			case 'n': clicks += 2; break;
			case 'q': clicks += 2; break;					
			case 'u': clicks += 2; break;				
			case 'x': clicks += 2; break;				
			case 'c': clicks += 3; break;				
			case 'f': clicks += 3; break;							
			case 'i': clicks += 3; break;					
			case 'l': clicks += 3; break;			
			case 'o': clicks += 3; break;						
			case 'r': clicks += 3; break;				
			case 'v': clicks += 3; break;			
			case 'y': clicks += 3; break;
			case 's': clicks += 4; break;
			case 'z': clicks += 4; break;
		}
		

		
	}
	printf("%d", clicks);

	return 0;
}
