#include <stdio.h>
#include <string.h>

int IsHeximalPal(int n);

int main(){
	int n;

	scanf("%d", &n);

	for(; !IsHeximalPal(n); n++);

	printf("%X", n);

	return 0;
}

int IsHeximalPal(int n){
	int i;
	char string[100];

	sprintf(string, "%x", n);

	for(i = 0; i < (strlen(string)/2); i++){
		if(string[i] != string[strlen(string) - i - 1])
			break;
	}

	if(i == strlen(string)/2)
		return 1;
	else
		return 0;
}
