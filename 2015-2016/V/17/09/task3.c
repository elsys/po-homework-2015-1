#include <stdio.h>
#define max 200

int contohH(char h[], int a);
int chp(char h[],int l);

int main(){
	char h[max];
	int a, i = 0;
	scanf("%d",&a);
	if(a < 0) a = -a;
	int l = contohH(h,a);
		while(!chp(h,l)){
		a+=1;
		l = contohH(h,a);
	}
	while(l > 0){
		l--;
		printf("%c",h[l]);
	}
}


int contohH(char h[],int a){
	while(a > 0){
		switch(a % 16){
			case 10 : h[i] = 'A'; break;
			case 11 : h[i] = 'B'; break;
			case 12 : h[i] = 'C'; break;
			case 13 : h[i] = 'D'; break;
			case 14 : h[i] = 'E'; break;
			case 15 : h[i] = 'F'; break;
			default : h[i] = a % 16 + 48;
			i++;
		}
		a/=16;
	}
	return i;
}
int chp(char h[],int l){
	for(int i = 0, j = l - 1; i < l / 2; i++, j--){
		if(h[i] != h[j]){
			return 0;
		}
	}
	return 1;
}
