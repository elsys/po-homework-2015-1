#include <stdio.h>
#include <string.h>
int check();
int convert();
char roman[10];
int lenght;
int main()
{
	int temp,number;
	do{
	printf("Number:");
	fgets(roman,10,stdin);
	lenght=strlen(roman)-1;
	temp=check();
	if(temp==1) printf("Error!");
	else if(temp==0) break;
	}while(1);
	number=convert();
	if(number<=256) printf("=%d\n",number);
	else 
	{	printf("Number must be <=256!\n");
		printf("Error!"); 
		main();
	}
	return 0;
}
int check()
{
	int counter;
	for(counter=0;counter<lenght;counter++)
		if(roman[counter]!='C'&&roman[counter]!='L'&&roman[counter]!='X'&&roman[counter]!='V'&&roman[counter]!='I') return 1;
	return 0;
}
int convert()
{
	char romanModel[6]="IVXLC";
	int decModel[6]={1,5,10,50,100};
	int a,b,number=0;
	for(a=lenght;a>=0;a--)
		for(b=0;b<5;b++)
			{
				if(a>=1&&b>=1&&roman[a]==romanModel[b]&&roman[a-1]==romanModel[b-1])
					{
						number=number+decModel[b];
						number=number-decModel[b-1];
						a--;
					}
				else if(a>=1&&b>=2&&roman[a]==romanModel[b]&&roman[a-1]==romanModel[b-2])
					{
						number=number+decModel[b];
						number=number-decModel[b-2];
						a--;
					}
				else if(roman[a]==romanModel[b]&&roman[a-1]!=romanModel[b-1]&&roman[a-1]!=romanModel[b-2]) number=number+decModel[b];
				else if(lenght==1&&roman[a]=='I') return 1; 
				while(a!=0&&roman[a-1]==romanModel[b]&&roman[a]==romanModel[b])
					{
						number=number+decModel[b];
						a--;
					}
			}
	if(roman[0]=='V') number=number+5;
	return number;
}
