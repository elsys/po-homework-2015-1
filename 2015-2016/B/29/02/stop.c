#include<stdio.h>
#include<string.h>

int main()
	{
		char s[100],a;
		int i,l,e=0,m=0;
		printf(" text : ");fgets( s, 100, stdin );
		i=strlen(s);
			for(l=0 ; l<=i ; l++)
				{
				a=s[l];
				if(a=='S')
					{
					a=s[l+1];
					if(a=='T')
						{
						a=s[l+2];
						if(a=='O')
							{
							a=s[l+3];
							if(a=='P')
								{
								for(e; e<l; e++)
									{
									if(s[e]>='a'  && s[e]<='z')s[e]=s[e]-32;
									printf("%c", s[e]);

									}
								}
							m=1;
							}
						}
					}
	
				}			
			
		if(m==0)
		for(e=0;e<i;e++)
		{
			if(s[e]>='a'  && s[e]<='z')s[e]=s[e]-32;
			printf("%c", s[e]);
		}
		
	
		return 0;
	}
			
