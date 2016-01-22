#include <stdio.h>

int main(){
	
	int n;
	short int v;
	short int p;
	int flag[8];
	int replacer;
	
	scanf("%d %hi %hi", &n, &v, &p);

	if(p < 0 || p > 7){
		return 0;
	}
	if(v < 0 || v > 1){
		return 0;
	}
	
	for(int i = 0; i < p; i++){
		 replacer = n;
		 n = n >> 1;
		 if(replacer % n == 1){
			 flag[i] = 1;
		 }
		 else{
			 flag[i] = 0;
		 }
	}
	if(v == 1){
		n = n | v;
	}
	else{
		n = n & v;
	}
	for(int i = p - 1; i >= 0; i--){
		 n = n << 1;
		 if(flag[i] == 1){
			 n++;
		 }
	}
	printf("%d\n", n);
	return 0;
}



















