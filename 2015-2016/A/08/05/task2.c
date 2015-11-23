#include <stdio.h>
#include <string.h>

void next_generation(char * cur, char * next, int len);

int main(){
	int len, i = 0, j;
	char str[20], nextStr[20], temp;

	scanf("%d", &len);
	if(len >= 0 && len <= 20){
		while(i < len){
			scanf("%c", &temp);
			if(temp != ' '){
				printf("error: Input error! Space expected.");
				return 1;
			}

			scanf("%c", &temp);
			if(temp == '0' || temp == '1'){
				if((i == 0 || i ==  (len -1)) && temp == '1'){
					printf("error: Input error! cell chain must start and end with 0.");
					return 1;
				}	
				str[i] = temp;
			}
			else{
				printf("error: Input error! 0/1 expected.");
				return 1;
			}

			i++;
		}
		str[i] = '\0';

		for(i = 0; i < 1000; i++){
			for(j = 0; j < len; j++){
				if(str[j] == '0')
					printf(".");
				else
					printf("*");
			}
			printf("\n");
			/*this condition is not in the while loop so that  a line with only dots is output*/
			if(strchr(str, '1') == NULL)
				break;

			next_generation(str, nextStr, len);
		}
	}

	return 0;
}

void next_generation(char * cur, char * next, int len){
	int i = 0;

	for(i = 1; i < (len - 1); i++){
		/*the following test checks if ONLY ONE of the chars is true(both true == false)*/
		if((cur[i] == '0') && ((cur[i-1] == '1' || cur[i+1] == '1') && !(cur[i-1] == '1' && cur[i+1] == '1'))){
			next[i] = '1';
		}
		else
			next[i] = '0';
	}
	next[0] = next[i] = '0';
	next[i+1] = '\0';

	strcpy(cur, next);
}