#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Findvalue(char a){
int v=0;
switch (a){
case 'A':
v=14;
break;
case 'K':
v=13;
break;
case 'Q':
v=12;
break;
case 'J':
v=11;
break;
case 'T':
v=10;
break;
case '9':
v=9;
break;
case '8':
v=8;
break;
case '7':
v=7;
break;
case '6':
v=6;
break;
case '5':
v=5;
break;
case '4':
v=4;
break;
case '3':
v=3;
break;
case '2':
v=2;
break;
default:v=0;
}
return v;
}

int main(){
int n,x,y,z,i,t;
char a[13],b[13]="23456789TJQKA",temp;
printf("Enter cards:");scanf("%s",a);
for(i=0;i<strlen(b)-1;i++){
t=0;
	for(z=0;z<strlen(b)-1;z++){
		if(a[i]==b[z]){
		t=1;
		}
	}
	if(t==0){
	printf("Invalid deck.");
	return 0;
	}
}
for(x=0;x<strlen(a);x++){
	for(y=0;y<strlen(a)-1;y++){
		if(Findvalue(a[y])>Findvalue(a[y+1])){
		int temp=a[y+1];
		a[y+1]=a[y];
		a[y]=temp;
		}
	}
}
printf("\n%s",a);
return 0;
}




