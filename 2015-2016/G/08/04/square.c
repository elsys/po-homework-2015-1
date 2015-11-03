#include <stdio.h>
#include <stdlib.h>


int main()
{

int z=1,n,m,s,i,sb=0,sb2=0,k;

printf("vuvedi strana ");
scanf("%d",&n);

s=n*n;

int arr[s];

m=n*2;

 for(i=0; i<s; i++)
    {

        scanf("%d",&arr[i]);

        if((i+1)%n==0 && i<s-1) printf("new row\n");

    }

    for(i=0;i<n;i++)
        {

        sb=sb+arr[i];

    }
i=n;
    while(i<s){

        for(;i<m;i++)sb2=sb2+arr[i];

        if(sb2!=sb){printf("greshka"); z=0;}
m=m+n;

sb2=0;
    }
if(z)
     for(i=1; i<n; i++)
        {
for(k=i,sb2=0; k<s ;k=k+n){

    if(k<=s)sb2=sb2+arr[k];

}

  if(k>=s && sb2!=sb ){  printf("greshka"); break;}


if(i==n-1 && sb2==sb) printf("kvadrata e magicheski");

}


    return 0;

}
