#include<stdio.h>
#include<string.h>

int main(){
	char s[50];
	char b;
	fgets(s,50,stdin);
	b=strlen(s);
	b--;
	while(b>=0){
		printf("%c",s[b]);
		b--;
	}
	printf("\n");
return 0;
}
