#include <stdio.h>
#include <string.h>

int check(char c[1000]);

int main(){
	char c[1000];
	int a;
	printf("Enter text:\n");
	scanf("%s", c);
	a = check(c);
	printf("%d\n", a);
}

int check(char c[1000]){
	int j;
	int i = 0;
	j = strlen(c) - 1;
	while (j > i){
		if(c[i] != c[j])
			return 0;
		i++;
		j--;
	}
	return 1;
}
