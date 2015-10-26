#include<stdio.h>
#include<string.h>


	int main()
	{
		int a=0,i,l,k[15],z;
		char s[15];
		printf("Vuvedi Rimsko chislo::");scanf("%s",s);
		l=strlen(s);
		for(z=0;z<l;z++)
		{
			if(s[z]=='I')k[z]=1;
			if(s[z]=='V')k[z]=5;
			if(s[z]=='X')k[z]=10;
			if(s[z]=='L')k[z]=50;
			if(s[z]=='C')k[z]=100;
		}
		for(z=0;z<l;z++)
		//zadachata ne proverqva za vernostta na zapisa na rimskoto chislo!!
		{
			if(z>0)
				if(k[z-1]<k[z])
				{
					k[z]=k[z]-k[z-1];
					k[z-1]=k[z-1]-k[z-1];
				}
			a=a+k[z];
		}
			printf("\n\n");
			printf("%d",a);
			printf("\n\n");
		return 0;
	}
