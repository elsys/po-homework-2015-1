#include<stdio.h>

int main()
{
int num[10] = { 0 };
int cifra,n;
printf("Vuvedi chislo :");scanf("%d", &n);
printf("Povtarqshti se chisla : ");
while (n>0)
{
cifra= n%10;
if (num[cifra] == 1)
{
printf("%d ", cifra);
num[cifra] = 2;
}
else if (num[cifra] == 2)
break;
else num[cifra] = 1;
n /= 10;
}
return 0;
}
