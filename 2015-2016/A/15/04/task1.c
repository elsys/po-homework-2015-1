#include <stdio.h>
#include <string.h>

int stringToInt(char* string){
	int i, number, len;
	len = strlen(string)-1;
	
	for(i=0, number=0; i<len; i++){
		number += string[i] - '0';
		if(i != len-1){
			number*=10;
		}
	}
	
	return number;
}

int is_prime(char input[10]){
	int number, i, len;
	len = strlen(input)-1;
	
	for(i=0; i<len; i++){
		if(input[i]<'0' || input[i]>'9'){
			
			return -1;
		}
	}
	
	number=stringToInt(input);
	
	if(number==0 || number == 1){
		return 0;
	}
	
	for(i=2; i<number; i++){
		if(number%i==0){
			return 0;
		}
	}
	
	return 1;
}

int main(){
	char input[10];
	fgets(input, 10, stdin);
	
	printf("%d", is_prime(input));
	
	return 0;
}

