#include <stdio.h>
int main()
{
	int p,n,v;
    int rs=1;

		scanf("%d",&n);

		do{
            scanf("%d",&v);
          }while(v<0 || v>1);


		do{
            scanf("%d",&p);
          }while(p<0 || p>7);

	rs=rs << p;

	if(v==0)
	{
		rs=~rs;
		n=n&rs;
	}else
		n=n|rs;
	printf("%d",n);

    return 0;
}
