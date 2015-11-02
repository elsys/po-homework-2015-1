#include<stdio.h>
#include<string.h>
int main()
{
char c[14];
int i,f=0,pom,p;
scanf("%s",c);
for(i=0;i<14;i++)
	{
	if(c[i]=='1' && c[i+1]!='0'){f=1; break;}
	if(c[i]=='0' && c[i-1]!='1'){f=1; break;}
	
		for(p=0;p<14;i++)
		{	
			if(p==i) p++;
			if(c[p]==c[i]){f=1; break;}
		}
	}
if(!f)
{
for(p=1;p<=14;p++)
	for(i=0;i<14;i++)
	{
		if(c[i]=='2')
		{
		pom=c[0];
		c[0]=c[i];
		c[i]=pom;
		}
		
		if(c[i]=='3')
		{
		pom=c[1];
		c[1]=c[i];
		c[i]=pom;
		}

		if(c[i]=='4')
		{
		pom=c[2];
		c[2]=c[i];
		c[i]=pom;
		}

		if(c[i]=='5')
		{
		pom=c[3];
		c[3]=c[i];
		c[i]=pom;
		}

		if(c[i]=='6')
		{
		pom=c[4];
		c[4]=c[i];
		c[i]=pom;
		}

		if(c[i]=='7')
		{
		pom=c[5];
		c[5]=c[i];
		c[i]=pom;
		}

		if(c[i]=='8')
		{
		pom=c[6];
		c[6]=c[i];
		c[i]=pom;
		}

		if(c[i]=='9')
		{
		pom=c[7];
		c[7]=c[i];
		c[i]=pom;
		}

		if(c[i]=='1')
		{
		pom=c[8];
		c[8]=c[i];
		c[i]=pom;
		}

		if(c[i]=='0')
		{
		pom=c[9];
		c[9]=c[i];
		c[i]=pom;
		}

		if(c[i]=='J')
		{
		pom=c[10];
		c[10]=c[i];
		c[i]=pom;
		}

		if(c[i]=='Q')
		{
		pom=c[11];
		c[11]=c[i];
		c[i]=pom;
		}

		if(c[i]=='K')
		{
		pom=c[12];
		c[12]=c[i];
		c[i]=pom;
		}

		if(c[i]=='A')
		{
		pom=c[13];
		c[13]=c[i];
		c[i]=pom;
		}
	}
printf("%s \n",c);

}
else {printf("\n Warning!");}
return 0;
}
