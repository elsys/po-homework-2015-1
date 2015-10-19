#include<stdio.h>
#include<string.h>

int main() {
int i,l; i=0;
char word[100];
char a;
printf("Vuvedi duma: "); 
gets(word);
l=strlen(word)-1;
while(i<l) {
	a=word[l];
	word[l]=word[i];
	word[i]=a;
	i++; l--;
	}
puts(word);
return 0;
}
