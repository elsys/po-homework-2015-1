#include<stdio.h>
int main()
{
    int n,a=0,x,y=0,z=0,p=0,q=0,r=0,f=0,j=0,u=0,v=0;
    scanf("%d",&n);
    while(n!=0)
    {
        x=n%10;
        if(x==0) a++;
        if(x==1) y++;
        if(x==2) z++;
        if(x==3) p++;
        if(x==4) q++;
        if(x==5) f++;
        if(x==6) j++;
        if(x==7) r++;
        if(x==8) v++;
        if(x==9) u++;
        n=n/10;
    }
    printf("0: %d \n",a);
    printf("1: %d \n",y);
    printf("2: %d \n",z);
    printf("3: %d \n",p);
    printf("4: %d \n",q);
    printf("5: %d \n",f);
    printf("6: %d \n",j);
    printf("7: %d \n",r);
    printf("8: %d \n",v);
    printf("9: %d \n",u);
}
