#include <stdio.h>

int backwords();
int main(){
	backwords();
	printf("\n");
	return 0;
}
int backwords(){
	char c;
	char op;
	scanf("%c",&c);
	if(c!=10)
		backwords();
	printf("%c",c);
}

