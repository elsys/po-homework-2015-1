#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0,c,i,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0;
    scanf("%d",&a);
    c=a;
    while(c>0)
    {c=c/10;
    b++;
    }
    for(i=0;i<b;i++)
    {c=a%10;
     a=a/10;
     switch(c)
        {case 1 : j++; break;
         case 2 : k++; break;
         case 3 : l++; break;
         case 4 : m++; break;
         case 5 : n++; break;
         case 6 : o++; break;
         case 7 : p++; break;
         case 8 : q++; break;
         case 9 : r++; break;
         case 0 : s++; break;
        }
    }
    if(j>0)
    printf("broq na 1 e %d\n",j);
    if(k>0)
    printf("broq na 2 e %d\n",k);
    if(l>0)
    printf("broq na 3 e %d\n",l);
    if(m>0)
    printf("broq na 4 e %d\n",m);
    if(n>0)
    printf("broq na 5 e %d\n",n);
    if(o>0)if(j>0)
    printf("broq na 6 e %d\n",o);
    if(p>0)
    printf("broq na 7 e %d\n",p);
    if(q>0)
    printf("broq na 8 e %d\n",q);
    if(r>0)
    printf("broq na 9 e %d\n",r);
    if(s>0)
    printf("broq na 0 e %d\n",s);

    return 0;
}
