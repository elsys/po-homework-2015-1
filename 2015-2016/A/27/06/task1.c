#include <stdio.h>
#include <string.h>
#define SIZE 15
void hex_to_dec(char*);
void dec_to_hex(char*);
int main()
{
	char choise;
	char colour[SIZE];
	choise=getchar();
	getchar();
	fgets(colour,SIZE,stdin);
	if(choise=='h') hex_to_dec(colour);
	else if(choise=='d') dec_to_hex(colour);
	return 0;
}
void hex_to_dec(char* colour)
{
	int number,j=1;
	printf("rgb(");
	for(int i=0;i<3;i++,j=j+2)
	{	
		number=0;
		if(colour[j]>='a'&&colour[j]<='z')
			number=number+(colour[j]-87);
		else if(colour[j]>='0'&&colour[j]<='9')
			number=number+(colour[j]-'0');
		number=number*16;
		if(colour[j+1]>='a'&&colour[j+1]<='z')
			number=number+(colour[j+1]-87);
		else if(colour[j+1]>='0'&&colour[j+1]<='9')
			number=number+(colour[j+1]-'0');
		if(i!=2) printf("%d, ",number);
		else printf("%d)",number);
	}
}
void dec_to_hex(char* colour)
{
	int number,position=2,j=0;
	char converted,converted_colour[8];
	converted_colour[0]='#';
	for(int i=0;i<3;i++)
	{
		while(colour[j]<'0'||colour[j]>'9') j++;
		for(number=0;colour[j]>='0'&&colour[j]<='9';j++)
			number=number*10+(colour[j]-'0');
		converted=number%16;
		number=number/16;
		if(converted>=10) converted_colour[position]=converted+87;
		else converted_colour[position]=converted+'0';
		converted=number%16;
		if(converted>=10) converted_colour[position-1]=converted+87;
		else converted_colour[position-1]=converted+'0';
		position=position+2;
	}
	printf("%s",converted_colour);
}
