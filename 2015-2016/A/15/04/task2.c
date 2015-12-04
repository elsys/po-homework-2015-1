#include <stdio.h>

int exact_square(int num){
	int i;
	
	for(i=0;i<num; i++){
		if(i*i==num){
			return 1;
		}
		if(i*i>num){
			return 0;
		}
	}
	
	return 0;
}
int main(){
	int num;
	scanf("%d", &num);
	
	printf("%d", exact_square(num));
	
	return 0;
}
