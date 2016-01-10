#include<stdio.h>
#include<string.h>
// Zadachata ne se kompilira. Kazva "‘gets’ is deprecated" ne znam kakvo oznachava i kak da go opravq. I vupreki che ne raboti bihte li proverili koda i bihte li mi obqsnili kak da go podobrq. Blagodarq!//
int main()
{
	char niz[100];
	int i=0,k=0,j=0,a=0;
	printf("napishi '.' za da spresh vavejdaneto\n");
	for(;i<100;i++)
	{
		gets(niz);
		if(niz[i]=='.')
			break;
	}
	j=i;
	do
	{
		if(niz[k]==niz[j])
		{
			k++;
			j--;
			a=1;
		}
		else
		{
			a=0;
			break;
		}
	}while(k<=i/2);
	printf("%d",a);
	return 0;
}

