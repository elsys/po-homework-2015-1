#include<stdio.h>
#include <stdbool.h>

int main(){

	char s[100];
	int i,c;
	bool k = false;

	do{

		scanf("%s", s);
		printf("%s \n", s);

		

		for(i=sizeof(s);i>=3;i--){

			if(s[i]=='P' && s[i-1]=='O' && s[i-2]=='T' && s[i-3]=='S' ){

				k = true;
			
			}
		
		}

		if(k){

			break;

		}
	
	}while(1);

	return 0;

}
