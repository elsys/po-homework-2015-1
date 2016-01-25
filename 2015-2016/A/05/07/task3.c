#include <stdio.h>
#include <stdlib.h>
int main()
{
int over,chislo,temp,i=0,counter,chisloto_org;
char hex[20];
scanf("%d",&chislo);
chisloto_org=chislo;
	do{
		chislo=chisloto_org;
		i=0;		
		while(chislo!=0){		
		temp=chislo%16;
		switch(temp){
			case 0:
				hex[i]='0'; 
				break;
			case 1:
				hex[i]='1'; 
				break;
			case 2:
				hex[i]='2'; 
				break;
			case 3:
				hex[i]='3'; 
				break;
			case 4:
				hex[i]='4'; 
				break;
			case 5:
				hex[i]='5';
				break;
			case 6:
				hex[i]='6';
				break;
			case 7:
				hex[i]='7';
				break;
			case 8:
				hex[i]='8';
				break;
			case 9:
				hex[i]='9';
				break;
			case 10:
				hex[i]='A';
				break;
			case 11:
				hex[i]='B';
				break;
			case 12:
				hex[i]='C';
				break;
			case 13:
				hex[i]='D';
				break;
			case 14:
				hex[i]='E';
				break;
			case 15:
				hex[i]='F';
				break;
			}
	chislo/=16;
	i++;}
	counter=i-1;
		for(temp=0;temp<i;temp++){
			if(temp>(i/2))
				break;
			else if(hex[temp]==hex[counter])
				counter--;
			else break;}
		if(counter<=temp)
			over=1;
		else chisloto_org++;
	}while(over==0);
	i=i-1;
	while(i>=0)	
	{printf("%c",hex[i]);
	i--;
	}
}
