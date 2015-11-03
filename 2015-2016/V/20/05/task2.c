#include <stdio.h>
#include <string.h>

int main(){
	char string[100], reverse_string[100] = {'\0'};
	int i,length = 0, flag = 1;
 
	printf("Enter a string \n");
	scanf("%[^\n]s",string);

	length = strlen(string);

	for (i = length - 1; i >= 0 ; i--){
        	reverse_string[length - i - 1] = string[i];
    	}
	
	for (i = 0; i < length ; i++){
		if (reverse_string[i] != string[i]){
            		flag = 0;
    		}
	}

	printf("%d\n", flag);
	
	return 0;
}

