#include <stdio.h>
#include <string.h>
int main() {
	char word[20];
	int i,l; i=0;
	printf("Vuvedi duma: ");
	scanf("%s", word);
	l=strlen(word)-1;
	while(i==!l) {
		if(word[i]==word[l]) { i++;l--; printf("1\n"); }
		else { printf("0\n"); break; }
	}
	return 0;
}
