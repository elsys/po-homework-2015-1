#include <stdio.h>
int main()
{
	int a,b,bit,rs;
	do
	{
		scanf("%d",&a);

	}while(a<0|| a>7);

	do
    {
		scanf("%d",&b);
    }while(b<0||b>200);

    bit=1<<a;  rs=b & bit;

	   if(rs==0)
	   {
	   	printf("0");
	   }else printf("1");



	return 0;
}
