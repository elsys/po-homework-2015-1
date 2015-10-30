#include <stdio.h>
#include <string.h>
#define max 128

int check(int len, char palindromlisi[]);

int main(){
	char palindromlisi[max];
	scanf("%s",palindromlisi);
	int len = strlen(palindromlisi);
	if(check(len,palindromlisi)){
		printf("Yes it is.\n");
	}
	else
		printf("No it is.\n");
	
}
int check(int len, char palindromlisi[]){
	int i;
	for(i = 0;i<len;i++,len--)
	{
		if(palindromlisi[i] != palindromlisi[len-1]){
			return 0;
		}
	}
	return 1;
}
