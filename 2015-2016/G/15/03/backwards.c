#include <stdio.h>
#include <string.h>

int main(){

char word[100];
char reverse[100];
int i,l,r;

scanf("%s", word);
l=strlen(word) -1;

for(i=l,r=0;i>=0;i--,r++){
	
	

	reverse[r]=word[i];

	

}
reverse[r]='\0';

printf("%s \n",reverse);


return 0;
}
