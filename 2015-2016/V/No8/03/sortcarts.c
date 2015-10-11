#include <stdio.h>



int main ()
{
char dek[14];
int deki[13];
scanf("%14s",dek);

int i=0;

while(dek[i]!='\0')
{
switch (dek[i])
{
case 'T' : deki[i]=11; break;
case 'J' : deki[i]=12; break;
case 'Q' : deki[i]=13; break;
case 'K' : deki[i]=14; break;
case 'A' : deki[i]=15; break;
default  : deki[i]=dek[i]-48;
}
i++;
}

int temp;
int k;
for(i=0;i<13;i++)
{
	for (k=0;k<13-i;k++)
	{
		if(deki[i]<deki[i+1])
		{
		 temp=deki[i+1];
		 deki[i+1]=deki[i];
		 deki[i]=temp;
		}
	}
int n;
for(n=0;n<13;n++)
printf(" %d",deki[n]);

printf(" \n");
}

i=0;
while(dek[i]!='\0')
{
switch (deki[i])
{
case 11 :dek[i]='T'; break;
case 12 :dek[i]='J';  break;
case 13 :dek[i]='Q'; break;
case 14 :dek[i]='K';break;
case 15 :dek[i]='A';break;
default :dek[i]=deki[i]+48;
}
i++;
}dek[i]='\0';
puts(dek);
puts(dek);puts(dek);puts(dek);puts(dek);puts(dek);
//for(i=0;i<13;i++)
//printf("\n%d",deki[i]);

return 0;
}
