#include <stdio.h>

int check_clicks(char input);

int main(){
	char input = '.';
	int clicks = 0,i = 0;
	while(input != 10 && i < 160){
		scanf("%c",&input);
		if(input != 10){			
			clicks += check_clicks(input);
		}
		i++;
	}
	printf("%d\n",clicks);
	return 0;
}

int check_clicks(char input){
	if(input >='a' && input <= 'o'){
		switch((input - 97) % 3){
			case 0: return 1; break;
			case 1: return 2; break;
			case 2: return 3; break;
		}	
	}
	else{
		switch(input){
			case 'p':
			case 't':
			case 'w':
			case ' ': return 1; break;
			case 'q':
			case 'u':
			case 'x': return 2; break;
			case 'r':
			case 'v':
			case 'y': return 3; break;
			case 's':
			case 'z': return 4; break;
		}
	}
}