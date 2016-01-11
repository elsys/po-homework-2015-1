#include <stdio.h>
#include <math.h>

int main() 
	
{char ch, hex;
char s[7];
int a=0,b=0,c=0,dec=0,i,j=0,power=1,digit;
scanf("%c",&ch);
if(ch == 'd')
{		
scanf("%d, %d, %d",&a ,&b ,&c);	
if(c==0)
{
s[j] = 0+48;
j++;
s[j] = 0+48;
j++;
}
while(c!=0)
{
digit = c%16;
if(digit>=0 && digit<=9)
{
hex=digit+48;
}
else
{
hex=digit+87;
}
s[j] = hex;
j++;
c = c/16;
}
if(b==0)
{
s[j] = 0+48;
j++;
s[j] = 0+48;
j++;
}
while(b!=0)
{
digit = b%16;
if(digit>=0 && digit<=9)
{
hex=digit+48;
}
else
{
hex=digit+87;
}
s[j] = hex;
j++;
b = b/16;
}
if(a==0)
{
s[j] = 0+48;
j++;
s[j] = 0+48;
j++;
}
while(a!=0)
{
digit = a%16;
if(digit>=0 && digit<=9)
{
hex=digit+48;
}
else
{
hex=digit+87;
}
s[j] = hex;
j++;
a = a/16;
}
	
printf("%s","#");
for(j=6;j>=0;j--)
{
printf("%c",s[j]);
}
	
}
else if(ch == 'h')
{
scanf("%s",s);
//printf("%s\n",s);
printf("rgb(");
		
for(i=1;i<7;i++)
{
hex = s[i];
if(hex >= '0' && hex <= '9')
{
digit = hex-48;
}
else
{
digit = hex-87;
}
			
dec += digit*pow(16,power);
			
if(power==0)
{
printf("%d",dec);
if(i != 6)
{
printf("%s",", ");
}
else 
{
printf("%s",")");
}
dec = 0;
power = 1;
}
else
{
power--;
}
}
	}
	return 0;
}
