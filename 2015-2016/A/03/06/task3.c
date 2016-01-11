#include<stdio.h>

int main() 
{ int is_pair,n,i,l=0,g=0,f,k;

int arr[200];

scanf("%d", &n);

while(n!=g)
{
scanf("%d", &i);
g++;

arr[l]=i;
l++;
}
for(f=0;f<l;f++)
{is_pair=0;
 for(k=0;k<l;k++)
{ if(arr[f]==arr[k] && f!=k)
{is_pair=1;
break;}
}
if(l==k && is_pair==0)
{printf("%d\n", arr[f]);
break;}

}
return 0;
}
