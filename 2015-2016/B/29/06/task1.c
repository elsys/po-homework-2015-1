#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char symbol,c;
	char string16[7];
	int d1 = 0, d2 = 0, d3 = 0, temp, ex;

	scanf("%c",&symbol);
	if(symbol == 'h'){
		scanf("%s",string16);
		c = string16[2];
                if(c >= '0' && c <= '9')temp = string16[2]-'0';
		if(c >= 'a' && c <= 'f')temp = string16[2]-87;
		d1 = d1 + temp;
		c = string16[1];
                if(c >= '0' && c <= '9')temp = string16[1]-'0';
		if(c >= 'a' && c <= 'f')temp = string16[1]-87;
		d1 = d1 + temp*16;

		c = string16[4];
                if(c >= '0' && c <= '9')temp = string16[4]-'0';
		if(c >= 'a' && c <= 'f')temp = string16[4]-87;
		d2 = d2 + temp;
		c = string16[3];
                if(c >= '0' && c <= '9')temp = string16[3]-'0';
		if(c >= 'a' && c <= 'f')temp = string16[3]-87;
		d2 = d2 + temp*16;

		c = string16[6];
                if(c >= '0' && c <= '9')temp = string16[6]-'0';
		if(c >= 'a' && c <= 'f')temp = string16[6]-87;
		d3 = d3 + temp;
		c = string16[5];
                if(c >= '0' && c <= '9')temp = string16[5]-'0';
		if(c >= 'a' && c <= 'f')temp = string16[5]-87;
		d3 = d3 + temp*16;

		printf("rgb(%d, %d, %d)",d1,d2,d3);
		
	}
	
	if(symbol == 'd'){
		scanf("%d, %d, %d",&d1,&d2,&d3);
	
			ex = d3%16;
			if(ex >=0 && ex<=9)string16[6]=ex+'0';
			if(ex >=10 && ex <=15)string16[6]=ex+87;
			d3 = d3/16;

			ex = d3%16;
			if(ex >=0 && ex<=9)string16[5]=ex+'0';
			if(ex >=10 && ex <=15)string16[5]=ex+87;

			ex = d2%16;
			if(ex >=0 && ex<=9)string16[4]=ex+'0';
			if(ex >=10 && ex <=15)string16[4]=ex+87;
			d2 = d2/16;
			ex = d2%16;
			if(ex >=0 && ex<=9)string16[3]=ex+'0';
			if(ex >=10 && ex<=15)string16[3]=ex+87;

			ex = d1%16;
			if(ex >=0 && ex<=9)string16[2]=ex+'0';
			if(ex >=10 && ex <=15)string16[2]=ex+87;
			d1 = d1/16;
			ex = d1%16;
			if(ex >=0 && ex<=9)string16[1]=ex+'0';
			if(ex >=10 && ex<=15)string16[1]=ex+87;
			
			string16[0]='#';

			printf("%s",string16);
		
			}
	

return 0;
	
}
