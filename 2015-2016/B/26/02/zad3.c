#include<stdio.h>
int main(){
 int a,t[1000],i=0,u,x,k;
 printf("a=");scanf("%d",&a);
 while(0){
if(a%10==2&&a%100==4)break;
else a=a/10;
}
while(a>0){
t[i]=a%10;
a=a/10;
k=i;
i++;}
for(u=i-2;u>=0;u--){
for(i=0;i<=u;i++){
if(t[i]<t[i+1]){
x=t[i];
t[i]=t[i+1];
t[i+1]=x;}
}
}
for(u=0;u<i;u++){
printf("%d",t[u]);
}
return 0;
}//ako raboti zdrave ako ne pak zdrave
