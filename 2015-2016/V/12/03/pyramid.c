#include <stdio.h>

int main(){
	int h,space,crh=-1,pr;
	char _char;
	printf("Enter the h:");
	scanf("%d",&h);
	printf("What char you want for your pyramide:");
	scanf("%c",&_char);
	scanf("%c",&_char);
	while(h > 0){
		pr = 0;
		crh+=2;
		space = h - 1;
		while(space>0){
			printf(" ");
			space--;
		}
		while(pr < crh){
			printf("%c",_char);
			pr++;
		}
		printf("\n");
		h--;
	}
	
}
