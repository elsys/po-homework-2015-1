#include<stdio.h>
#include<string.h>

int main(){


	char word[100];
	char reversed[100];
	int i,j;

	scanf("%s",word);

	for(i=strlen(word)-1,j=0;i>=0;i--,j++){

		reversed[j] = word[i];

	}

	reversed[j] = '\0';
	printf("%s \n", reversed);

	return 0;

}
