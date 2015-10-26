#include <stdio.h>
#include <string.h>
#define max 128



int main(){
	char palindromlisi[max];
	scanf("%s",palindromlisi);
	int len = strlen(palindromlisi);
	int i;
	for(i = 0;i<len;i++,len--)
	{
		if(palindromlisi[i] != palindromlisi[len-1]){
			printf("No it isn't\n");
			return 0;
		}
	}
	printf("Yes it is.\n");
	return 1;
}
