#include <stdio.h>
#include <string.h>
#define maxnum 256


int is_prime(char number[],int len);
int char_to_int(char number[],int len);
int power_10(int power);

int main(){
	char number[maxnum];
	scanf("%s",number);
	int len = strlen(number);
	printf("%d\n",is_prime(number,len));
	return 1;
}

int is_prime(char number[],int len){
	int count;
	for(count = 0;count < len;count++){
		if(*number < 48 || *number > 57){
			return -1;
		}

	}
	int int_number = char_to_int(number,len);
	if(int_number == 1){
		return -1;
	}
	for(count = 2; count < int_number; count++){
		if(int_number % count == 0){
			return 0;
		}
	}
	return 1;
}

int char_to_int(char number[], int len){
	int int_number = 0;
	int power = 0;
	int result_power;
	char current_symbol;
	while(len > 0){
		len--;
		current_symbol = *(number + len);
		result_power = power_10(power);
		int_number = int_number + ((current_symbol - 48) * result_power);
		power++;
	}
	return int_number;
}

int power_10(int power){
	int result = 1;
	int count = power;
	while(count > 0){
		result = result * 10;
		count = count - 1;
	}
	return result;
}
