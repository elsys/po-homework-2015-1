#include<stdio.h>
#include<string.h>

int isPalindrom(char word[]);

int main(){

char word[100];

scanf("%s", word);

printf("%d \n", isPalindrom(word));

return isPalindrom(word);

}

int isPalindrom(char word[]){

int i,j;

for(i=0,j=strlen(word)-1;i < (strlen(word)-1)/2 ;i++,j--){

	if(word[i]!=word[j]){

		return 0;
	
	}

}

return 1;

}
