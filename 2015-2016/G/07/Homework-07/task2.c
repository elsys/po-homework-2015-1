#include<stdio.h>
void next_generation(char current[20], char next[20], int length)
{
	int n,helper[20],a=0;
	do
	{
		scanf("%d",&n);
	}while(n<0&&n>20);
	for(length=0;length<n;length++)
	{
		scanf("%d",&helper[length]);
	}
	for(length=0;length<n;length++)
	{
		if(helper[length]!=0)
			current[length]='.';
		else
			current[length]='*';	
	}
	do 
	{
		for(length=1;length<n;length++)
		{
			if(current[length+1]==current[length-1])
				next[length]='.';
			else
				next[length]='*';
			if(current[1]!=0)
				next[length]='.';
			else
				next[length]='*';
			if(current[n-1]!=0)
				next[length]='.';
			else
				next[length]='*';	
		}
		for(length=0;length<n;length++)
		{
			next[length]=current[length];
		}
		for(length=0;length<n;length++)
		{
			printf("%c",current[length]);
		}
		a++;
	}while(a<1000&&current[0]!=0||current[1]!=0||current[2]!=0||current[3]!=0||current[4]!=0||current[5]!=0||current[6]!=0||current[7]!=0||current[8]!=0||current[9]!=0||current[10]!=0||current[11]!=0||current[12]!=0||current[13]!=0||current[14]!=0||current[15]!=0||current[16]!=0||current[17]!=0||current[18]!=0||current[19]!=0);
}

int main()
{
	int length;
	char current[20],next[20];
	next_generation(current[20],next[20],length);
	return 0;
}
