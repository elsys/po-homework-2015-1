#include <stdio.h>
#include <string.h>

int Cardvalue(char);
int Isitcard(char);
int main(){
char a;
char cards[100];
int i,j;

scanf("%[^\n]s", cards);

for(i=0;i<strlen(cards);i++){

	if(!Isitcard(cards[i])){
	printf("Not valid card\n");break;

		

	}

		for(j=i+1;j<strlen(cards);j++){

		if(Cardvalue(cards[i])>Cardvalue(cards[j])){
		a=cards[i];
		cards[i]=cards[j];
		cards[j]=a;		
		

		}

		}


	



}

printf("%s \n",cards);

}

int Isitcard(char card){

switch (card){

case 'A':return 1;
break;
case 'K':return 1;
break;
case 'Q':return 1;
break;
case 'J':return 1;
break;
case 'T':return 1;
break;
case '9':return 1;
break;
case '8':return 1;
break;
case '7':return 1;
break;
case '6':return 1;
break;
case '5':return 1;
break;
case '4':return 1;
break;
case '3':return 1;
break;
case '2':return 1;
break;
default: return 0;
break;


}

}
int Cardvalue(char valuecard){
switch (valuecard){
case 'A':return 14;
break;
case 'K':return 13;
break;
case 'Q':return 12;
break;
case 'J':return 11;
break;
case 'T':return 10;
break;
case '9':return 9;
break;
case '8':return 8;
break;
case '7':return 7;
break;
case '6':return 6;
break;
case '5':return 5;
break;
case '4':return 4;
break;
case '3':return 3;
break;
case '2':return 2;
break;
}
return 0;

}
