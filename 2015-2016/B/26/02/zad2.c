#include<stdio.h>

int main(){
int c0=0,c1=1,c2=2,c3=3,c4=4,c5=5,c6=6,c7=7,c8=8,c9=9,a,g=-1;
int b[500],b0=0,b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0;
printf("a=");scanf("%d",&a);
while(a>0)
{
	g++;
b[g]=a%10;
a=a/10;

}
while(g>=0){
if(c0==b[g])b0++;
if(c1==b[g])b1++;
if(c2==b[g])b2++;
if(c3==b[g])b3++;
if(c4==b[g])b4++;
if(c5==b[g])b5++;
if(c6==b[g])b6++;
if(c7==b[g])b7++;
if(c8==b[g])b8++;
if(c9==b[g])b9++;
g--;}
printf("\nc0=%d",b0);
printf("\nc1=%d",b1);
printf("\nc2=%d",b2);
printf("\nc3=%d",b3);
printf("\nc4=%d",b4);
printf("\nc5=%d",b5);
printf("\nc6=%d",b6);
printf("\nc7=%d",b7);
printf("\nc8=%d",b8);
printf("\nc9=%d",b9);
return 0;
}
