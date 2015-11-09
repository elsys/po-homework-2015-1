#include <stdio.h>
#include <string.h>

int Palindrom(char Pali[]);
int main(){
int i,a;
char Pali[100];
scanf("%s", Pali);
printf("%d \n",Palindrom(Pali));


return 0;

}

int Palindrom(char Pali[]){
int i,a;
	for(i=0,a=strlen(Pali)-1;i<strlen(Pali)/2;i++,a--){

		if(Pali[i]!=Pali[a]){
		return 0;
		}
	}

return 1;


}
