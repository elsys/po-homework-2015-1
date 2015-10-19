#include<stdio.h>
#include<string.h>
#include <stdbool.h>

int main(){

	char s[100];
	int i,c;
	bool check = false;

	do{

		scanf("%s", s);		

		for(i=strlen(s);i>=3;i--){

			if(s[i]=='P' && s[i-1]=='O' && s[i-2]=='T' && s[i-3]=='S' ){

				check = true;
			
			}
		
		}


		for(i=0;i<=strlen(s);i++){
		      
			if(s[i]>='a' && s[i]<='z'){

				s[i]=s[i]-32;

			}
		       
		}

		printf("%s \n", s);

		if(check){

			break;

		}
	
	}while(1);

	return 0;

}
