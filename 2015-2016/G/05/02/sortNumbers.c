#include <stdio.h>
int main()
{
int k,i,a,hp,lenght=0;
int ch[1000];
while(1)
{
	scanf("%d",&a);
if(a==42)
{
	break;
}
ch[lenght]=a;
lenght++;
}
for(i=0;i<lenght-1;i++)
  {
	for(k=0;k<lenght-1;k++)
	{
	    if(ch[k]>ch[k+1])
		{
		hp=ch[k];
		ch[k]=ch[k+1];
		ch[k+1]=hp;
		}
  	}
  }
for(i=0;i<lenght;i++)
printf("\n%d\n ",ch[i]);
return 0;
}
