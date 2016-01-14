#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int sort(char codesort)
{
 	while(codesort<='F' && codesort>='A')
	return (codesort-'A')+10;
	while(codesort>='a' &&  codesort<='f')
	return (codesort-'a')+10;
	while(codesort>='0' && codesort<='9')
	return codesort-'0';
	return 0;
}
int modify(int hexcode)
{
	if(hexcode>=0 && hexcode<=9)
	return hexcode+'0';
	else if(hexcode>=10 && hexcode<=15)
	return (hexcode+'a')-10;
	return 0;
}
int call(int number)
{
	printf("%c", modify(number/16));
	printf("%c", modify(number%16));
	return 0;
}

int main()
{
	int i=0,red=0,green=0,blue=0;
	char category[1];
	char hex[10];
	scanf("%c",category);
	if(category[0]=='d')
	{
		scanf("%d,%d,%d",&red,&green,&blue);
		printf("#");
		call(red);
		call(green);
		call(blue);
	}
	else if(category[0]=='h')
		{
		scanf("%s",hex);
		if(hex[i=='#'])
			{
				i++;
				red=(red*16)+sort(hex[i]);
				i++;
				red=(red*16)+sort(hex[i]);
				i++;
				green=(green*16)+sort(hex[i]);
				i++;
				green=(green*16)+sort(hex[i]);
				i++;
				blue=(blue*16)+sort(hex[i]);
				i++;
				blue=(blue*16)+sort(hex[i]);
				i++;
				printf("rgb(%d, %d, %d)",red,green,blue);
			}
		}
	return 0;
}
