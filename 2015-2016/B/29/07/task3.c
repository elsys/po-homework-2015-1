#include<stdio.h>
#include<string.h>

int main(){
	int number, index = 0, lenght, newnumber, breaker = 0,i;
	char hex[10];
	scanf("%d",&number);
	newnumber = number;
	for(i=0; i<10; i++) hex[i] = 0;
	while(1){
	number = newnumber;
		
		while(number > 0){
			hex[index] = number % 16 +48;
			number = number/16;
			index++;
			
		}

		lenght = strlen(hex)-1;
		for (index = 0 ; index < strlen(hex)-1 / 2; index++, lenght--){
			if (hex[index] != hex[lenght]){
				newnumber++;
				breaker = 0;
				break;
			}
			else breaker = 1;
		}
			if (breaker == 1)break;
	}
		printf("%X", newnumber);
	
	return 0;
}

