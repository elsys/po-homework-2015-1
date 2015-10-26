#include <stdio.h>
void main(void)
{
int x=0,y=0,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;

printf("Input number:");
scanf("%d",&x);

while(x!=0)
{
	y=x%10;
	x=x/10;
	if(y==0)zero++;
	if(y==1)one++;
	if(y==2)two++;
	if(y==3)three++;
	if(y==4)four++;
	if(y==5)five++;
	if(y==6)six++;
	if(y==7)seven++;
	if(y==8)eight++;
	if(y==9)nine++;
}
printf("\n Number of digit zero: %d",zero);
printf("\n Number of digit one: %d",one);
printf("\n Number of digit two: %d",two);
printf("\n Number of digit three: %d",three);
printf("\n Number of digit four: %d",four);
printf("\n Number of digit five: %d",five);
printf("\n Number of digit six: %d",six);
printf("\n Number of digit seven: %d",seven);
printf("\n Number of digit eight: %d",eight);
printf("\n Number of digit nine: %d",nine);
}
