#include<stdio.h>
int main()
{
int a[10];
int i,n,k;
printf("4islo:");
scanf("%d",&n);
for(i=0;i<=9;i++){
a[i] = 0;
}
for(i=0;i<=9;i++){
while(n!= 0){
k= n%10;
a[k] = a[k]+1;
n=n/10;
}
}
for(i=0;i<=9;i++){
printf("%d-%d\n",i,a[i]);

}
return 0;
}


