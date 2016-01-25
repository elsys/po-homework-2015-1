#include<stdio.h>
int main(){
	char numbers_is_16[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int number=0, helper=1, i=0, k=0;
	char n[100];
	scanf("%d", &number);
	while(helper!=0){
	helper=sim(number);
	number++;
	}
	number--;
	while (number>0){
		for(i=0; i<17; i++){
			if(number%16==i) {n[k]=numbers_is_16[i]; k++;}
		}
	number=number/16;
	}

	for(k--; k>=0; k--){
	printf("%c", n[k]);
	}
return 0;
}

int how_long_is_number_in_16(int number){
	int l=0;
	while (number>0){
	number=number/16;
	l++;
	}
	return l;

}
int sim(int number){
	char numbers_is_16[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int helper=0, i=0, k=0;
	int l= how_long_is_number_in_16(number);
	char n[l];
	for(i=0; i<l; i++){
	n[i]=0;
	}
	while (number>0){
		for(i=0; i<17; i++){
			if(number%16==i) {n[k]=numbers_is_16[i]; k++;}
		}
	number=number/16;
	}

	for(i=0, k--; i<=l/2, k>=l/2; i++, k--){
	if(n[i]!=n[k]) helper++;
	}

	if(helper==0) return 0;
	else return 1;

}

