#include <stdio.h>
#define max 200

int convert_to_hex(char hex[], int a);
int check_palin(char hex[],int lenght);

int main(){
	char hex[max];
	int a;
	scanf("%d",&a);
	if(a < 0) a = -a;
	int lenght = convert_to_hex(hex,a);
		while(!check_palin(hex,lenght)){
		a+=1;
		lenght = convert_to_hex(hex,a);
	}
	while(lenght > 0){
		lenght--;
		printf("%c",hex[lenght]);
	}
}


int convert_to_hex(char hex[],int a){
	int i;
	for(i = 0; a > 0; i++){
		switch(a % 16){
			case 10 : hex[i] = 'A'; break;
			case 11 : hex[i] = 'B'; break;
			case 12 : hex[i] = 'C'; break;
			case 13 : hex[i] = 'D'; break;
			case 14 : hex[i] = 'E'; break;
			case 15 : hex[i] = 'F'; break;
			default : hex[i] = a % 16 + 48;
		}
		a/=16;
	}
	return i;
}

int check_palin(char hex[],int lenght){
	for(int i = 0, j = lenght - 1; i < lenght / 2; i++, j--){
		if(hex[i] != hex[j]){
			return 0;
		}
	}
	return 1;
}
