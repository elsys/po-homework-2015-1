#include <stdio.h>
#include <string.h>
 
int main(){
	char c[10000];
	int i=0;
	int j;
	int a;
	printf("Enter text:");
	scanf("%s", c);
	j=strlen(c)-1;
	while (i < j){
		a = c[i];
		c[i] = c[j];
		c[j]=a;
		i++;
		j--;
	}
	printf("%s", c);
}
