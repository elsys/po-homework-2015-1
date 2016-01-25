#include <stdio.h>

int main()
{
	int i,a[1000],sor=0,x,t,y;
	for(i=0;i<1000;i++)
		a[i]=420;	//Шансът е нищожно малък, но ако компилаторът слага случайна стойност и се падне 42, програмата ще се затвори.
	i=-1;
	do
	{
		i++;
		scanf("%d",&a[i]);
	}
	while(i<1000 && a[i]!=42);	//42 е отговорът, но какъв е въпросът?
	y=i;
	while(!sor)
	{
		sor=1;
		for(x=0;x<=y;x++)
		{
			if(a[x]>a[x+1])
			{
				sor=0;
				t=a[x];
				a[x]=a[x+1];
				a[x+1]=t;
			}
		}
		y--;
	}
	for(y=0;y<i;y++)
		printf("%d, ",a[y]);
	printf("%d ",a[i]);
	return 0;
}