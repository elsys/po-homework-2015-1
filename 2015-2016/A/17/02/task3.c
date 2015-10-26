#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int x[1000];
    int i,c,p,y,q,d;
    for(i=0;i<x;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]==42)
        {
            break;
        }

    }
  for(c=0; c<i; c++)
    {
		for(p=0; p<i; p++)
		{
			if(x[c]<x[p])
			{
				d=x[c];
				x[c]=x[p];
				x[p]=d;
			}
		}
	}
  for(q=0;q<i;q++)
  {
      printf("%d", x[q]);
  }
  return 0;
}
