#include <stdio.h>

int decHex(int num);
void findPal(int num);
int checkSym(char symbol);

int main(){
	int num;
	
	scanf("%d", &num);
	
	findPal(num);
	
	return 0;
}

void findPal(int num){
	int i, l, orignum=num, len, pal=1;
	char temphex[17], hex[17];
	for(i=0; num!=0; i++){
		temphex[i]=decHex(num%16);
		num/=16;
	}
	
	len=i;
	
	for(l=0; i>0; l++, i--){
		hex[l]=temphex[i-1];
	}
	//results came out normal but with random characters so i added this to purge the impurities
	for(i=0; i<17; i++){
		if(checkSym(hex[i])){
			hex[i]=0;
		}
	}
	if(len==1){
		printf("%s", hex);
		return;
	}
	else if(len==2){
		if(hex[0] == hex[1]){
			printf("%s", hex);
			return;
		}
		else{
			findPal(orignum+1);
			return;
		}
	}
	else{
		for(i=0, l--; i<len/2; i++, l--){
			if(hex[i]!=hex[l]){
				pal=0;
			}
		}
	}
	if(pal==1){
		printf("%s", hex);
		return;
	}
	
	findPal(orignum+1);
	
	return;
}

int checkSym(char symbol){
	if((symbol>='0' && symbol<='9') || (symbol>='A' && symbol<='F')){
		return 0;
	}
	return 1;
}

int decHex(int num){
	if(num>=10){
		switch(num){
			case 10:
				return 'A';
				break;
			case 11:
				return 'B';
				break;
			case 12:
				return 'C';
				break;
			case 13:
				return 'D';
				break;
			case 14:
				return 'E';
				break;
			case 15:
				return 'F';
				break;
			
		}
	}
	else{
		return num+'0';
	}
	return 1;
}
