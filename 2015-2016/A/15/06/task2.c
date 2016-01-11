#include <stdio.h>
#include <string.h>
#include <ctype.h>
int getNOfPresses(char message[161]);

int main(){
	
	char message[161];
	
	fgets(message, 160, stdin);
	printf("%d", getNOfPresses(message));
	
	return 0;
}

int getNOfPresses(char message[161]){
	int i, sum=0, button;
	
	for(i=0; message[i]!='\0'; i++){
		message[i]=tolower(message[i]);
	}
	
	for(i=0; message[i]!='\0';i++){
		if(message[i]==' '){
			sum++;
		}
		else if(message[i]>='p' && message[i]<='s'){
			sum+=(message[i]-'p'+1);
		}
		else if(message[i]>='w' && message[i]<='z'){
			sum+=(message[i]-'w'+1);
		}
		else if(message[i]>'s'){
			sum+=(message[i]-'s');
		}
		else if(message[i]>='a' && message[i]<'p'){
			button=(message[i]-'a')/3; //this finds out on which button the letter is, or in other words it automatically gets the amount of presses regardless if the letter is a-c d-f and so on 
			sum+=(message[i]-'a')-(button*3)+1;
		}
	}
	
	return sum;
	
}
