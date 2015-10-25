#include <stdio.h>

 int main()
	{
		int a[1000],b,c,i,t,z;
		


		for(i=0;b!=42;i++)
		{
			scanf("%d",&a[i]);//i=3;
			b=a[i];
		}
		z=i;
		for(c=0; c<z; ++c)
       			 for(b=z-1; b>c; --b){
  
              			  if(a[b-1] > a[b])
					{
                     				t = a[b-1];
                        			a[b-1] = a[b];
                       				a[b] = t;
             				}
		}
		for(t=0; t<z; t++) printf("chislo %d e %d\n",t+1,a[t]);
		
		return 0;
		
	}
