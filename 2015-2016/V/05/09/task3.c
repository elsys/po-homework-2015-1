#include <stdio.h>
#define max 200

int convert_hex(char hex[], int b);
int checking_palindr(char hex[], int extent);
int main()
{
	char hex[max];
	int b;
	scanf("%d",&b);
	if(b < 0) b = -b;
	int extent = convert_hex(hex,b);
		while(!checking_palindr(hex,extent))
		{
		b+=1;
		extent = convert_hex(hex,b);
	}
	while(extent > 0)
	{
		extent--;
		printf("%c",hex[extent]);
	}
}
int convert_hex(char hex[],int b)
{
	int i;
	for(i = 0; b > 0; i++)
	{
		switch(b % 16)
		{
			case 10 : hex[i] = 'A'; break;
			case 11 : hex[i] = 'B'; break;
			case 12 : hex[i] = 'C'; break;
			case 13 : hex[i] = 'D'; break;
			case 14 : hex[i] = 'E'; break;
			case 15 : hex[i] = 'F'; break;
			default : hex[i] = b % 16 + 48;
		}
		b/=16;
	}
	return i;
}
int checking_palindr(char hex[], int extent)
{
	for(int i = 0, j = extent - 1; i < extent / 2; i++, j--)
	{
		if(hex[i] != hex[j])
		{
			return 0;
		}
	}
	return 1;
}
