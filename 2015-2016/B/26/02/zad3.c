#include<stdio.h>
int main(){
 int a[1000],t[1000],i=0,u=0,x,k;
for(u=0;u<1000;u++){
scanf("%d",&a[u]);
if(a[u]==42)break;
k++;}
for(u=i-2;u>=0;u--){
for(i=0;i<=u;i++){
if(a[i]<a[i+1]){
x=a[i];
a[i]=a[i+1];
a[i+1]=x;}
}
}
for(u=0;u<i;u++){
printf("%d",a[u]);
}
return 0;
}
