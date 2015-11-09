#include <stdio.h>

/*int main(){
	int numbers[1000];
	int input = 0;
	while (input < 1000){
		printf("\nInput Number:");
		scanf("%d", &numbers[input]);
		if (numbers[input] == 42){
			break;
		}
		input++;
	}
	int i,j;
	for (i = 0; i < input; i++){
		for(j = 0; j< input; j++){
			if(numbers[i] > numbers[j]){
				int swap = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = swap;
			}		
		}
	}
	for(i=0;i<input;i++)
		printf("\n%d",numbers[i]);
	return 0;
}
*/

///2nd
int main(){
	int s=0,a,acp,br;
	printf("A:");
	scanf("%d",&a);
	while(s<10){
		br=0;
		acp = a;
		while(acp >= 1){
			if(acp % 10 == s)
				br++;
			acp/=10;
		}
		if(br != 0)
			printf("%d times %d\n",s,br);
		s++;
	}

}
