#include <stdio.h>
int main(){
    char s[13]; // = {'2', '4', '3', 'T', '6', '7', '8', '9', '5', 'J', 'Q', 'K', 'A'};	
    char result[13];
    int i =0;
    char c;
    printf("Molq vuvedete : (2,3,4,5,6,7,8,9,T,J,Q,K,A):\n");	
  
    while((c = getchar()) != '\n')
    {	
	s[i] = c;	
	i++;	
    }
 
    int j;
    for(i = 0; i < 13; i++)
    {
	switch (s[i])
	{
		case '2':
			result[0] = s[i];
			break;
		case '3':
			result[1] = s[i];
			break;
		case '4':
			result[2] = s[i];
			break;
		case '5':
			result[3] = s[i];
			break;
		case '6':	
			result[4] = s[i];
			break;
		case '7':	
			result[5] = s[i];
			break;
		case '8':	
			result[6] = s[i];
			break;
		case '9':	
			result[7] = s[i];
			break;
		case 'T':	
			result[8] = s[i];
			break;
		case 'J':	
			result[9] = s[i];
			break;
		case 'Q':	
			result[10] = s[i];
			break;	
		case 'K':	
			result[11] = s[i];
			break;	
		case 'A':	
			result[12] = s[i];
			break;
	
		default:
			break;

	}	
		
    }	
    for(j = 0; j < 13; j++)
    {
	printf("%c ", result[j]);
	
    }
}
