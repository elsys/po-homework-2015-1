#include <stdio.h>
#include <string.h>

int pali(int c);

int main()
{
    int m, n;
    scanf("%d",&n);

	do
	{
		m=pali(n);
		if(!m)
		{
            n++;
		}
	}while(m==0);

	printf("%X",n);
	return 0;
}

int pali(int k)
{
    int a, i, j, n;
    char mas[100], c1, c2;

	sprintf(mas,"%X",k);
	a=1;
	n=strlen(mas);
	i=n/2;
	for(j=0; j<i; j++)
    {
		c1=mas[j];
		c2=mas[n-j-1];
		if(c1!=c2)
        {
            a=0;
        }
	}
	return a;
}
