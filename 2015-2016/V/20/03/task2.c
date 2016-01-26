#include<stdio.h>
#include<string.h>

int main(){
	char word[100];
	int i;

	scanf("%s", word);
   
	i=strlen(word);
     
		for(i=i-1; i>=0; i--){ 
		printf("%c", word[i]); 
		}

     		printf("\n");
     
   return 0;

}
