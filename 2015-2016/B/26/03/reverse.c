#include<stdio.h>
#include<string.h>

int main(){
	int b;
	char s[50];
	scanf("%s",&s[50]);
	b=strlen(s);
	while(b>=0){
		printf("%c",s[b]);
		b--;
	}
return 0;
}
