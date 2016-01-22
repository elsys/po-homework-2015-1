#include<stdio.h>
#include<string.h>

int main(){
	char s[50];
	int b;
	fgets(s,50,stdin);
	b=strlen(s);
	b--;
	for(; b >=0 ; b--)
	printf("%c",s[ b ]);
	printf("\n");
return 0;
}
