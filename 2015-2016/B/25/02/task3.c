#include<stdio.h>
int main ()
{
	int a[1000];
	int i=0, max, d, z;

	for(i=0; i<1000; i++){
	printf("Number:");
	scanf("%d", &a[i]);
	if(a[i]==42) break;
	}
    max=i;


		for(i=0;i<max-1;i++)
          {
            for(d=0;d<max-i-1;d++)
            {
              if(a[d]>a[d+1])
              {
                z=a[d];
                a[d]=a[d+1];
                a[d+1]=z;
              }
            }
          }


		for(i=0; i<max; i++) {printf("%d \n", a[i]);}


return 0;
}
