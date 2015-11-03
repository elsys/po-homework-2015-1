#include <stdio.h>
int main()
{
	int a,n,b,f;
    printf("n=(do 10 cifreno chislo)  ");scanf("%d",&n);
	for(a=0;a<10;a++)
    {
		f=0;
		b=n;
		do
        {
			if(a==b%10)
            {
				f++;
            }
			b=b/10;
		}while(b>0);

		if(f!=0)
         {
			if(f==1)
            printf("%d se povtarq  %d put\n",a,f);
         else
			printf("%d se povtarq  %d puti\n",a,f);
         }
	}
}
