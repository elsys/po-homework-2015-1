#include<stdio.h>

int is_hex_palidrom(int num); 

int main() 
{ 
int d,n; 
scanf("%d",&d); 
for(n=d;n<=32767;n++) 
{ 
 if(is_hex_palidrom(n) == 1) 
 { 
             
 break; 
 } 
 } 
return 0; 
} 

int is_hex_palidrom(int num) 
{ 
int len = 0,digit,i,j; 
char hex,c[4]; 
while (num != 0) 
{ 
digit = num%16; 
if(digit>=0 && digit<=9)
{
hex=digit+48;
}
else
{
hex=digit+55;
}
c[len] = hex;
num=num/16; 
len++; 
} 
for (i=0,j=len-1;i<j;i++,j--) 
{ 
if(c[i] != c[j]) 
{ 
return 0; 
} 
} 
for (i=0;i<len;i++)
{
printf("%c",c[i]);
}
return 1; 
} 
