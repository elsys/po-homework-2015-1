#include <stdio.h>
#include <string.h>
#define string_len 7

void convert_to_dec(char number[], int length,int con_nums[]);
void convert_to_hex(char number[],int con_nums[]);
int pow_me(int pow_meer,int num);

int main(){
	char num_sys;
	int con_nums[3] = {0};
	char number[string_len];
	scanf("%c",&num_sys);
	if(num_sys == 'h'){
		scanf("%s",number);
		convert_to_dec(number,strlen(number),con_nums);
		printf("rgb(");
		for(int i = 0; i < 3; ++i){
			printf("%d",con_nums[i]);
			if(i < 2){
				printf(", ");
			}
		}
		printf(")\n");
	}else if(num_sys == 'd'){
		scanf("%d, %d, %d",&con_nums[0],&con_nums[1],&con_nums[2]);
		convert_to_hex(number, con_nums);
		printf("%s\n",number );
	}
	return 0;
}

void convert_to_dec(char number[], int length,int con_nums[]){
	int pow_meer = 1,count_con_nums = 0;
	for (int i = 1; i < length; ++i){
		if(number[i] >= '0' && number[i] <= '9'){
			con_nums[count_con_nums] = con_nums[count_con_nums] + ((number[i] - 48) * pow_me(pow_meer,16));
		}
		else if(number[i] >= 'a' && number[i] <= 'f'){
			con_nums[count_con_nums] = con_nums[count_con_nums] + ((number[i] - 'a' + 10) * pow_me(pow_meer,16));
		}
		pow_meer--;
		if(pow_meer != 0){
			pow_meer = 1;
			count_con_nums++;
		}


	}
}

void convert_to_hex(char number[],int con_nums[]){
	number[0] = '#';
	int check,position;
	for(int i = 0; i < 3; i++){
		position = 2 + i * 2;
		while(con_nums[i] > 0){
			check = con_nums[i] % 16;
			con_nums[i]/=16;
			if(check < 10){
				number[position] = check + '0';
			}else{
				switch(check){
					case 10:number[position] = 'a'; break;
					case 11:number[position] = 'b'; break;
					case 12:number[position] = 'c'; break;
					case 13:number[position] = 'd'; break;
					case 14:number[position] = 'e'; break;
					case 15:number[position] = 'f'; break;
				}

			}
			if(con_nums[i]> 0){
				position--;			
			}
		}
		while(position > i * 2 + 1){
			position--;
			number[position] = '0';
		}	
	}
}


int pow_me(int pow_meer, int num){
	int a = 1, count = 0;
	while(count < pow_meer){
		a = a * num;
		count++;
	}
	return a;
}
