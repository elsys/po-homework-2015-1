#include<stdio.h>


int main()
{	int n,i,k,temp,l=0,f,j=1;
	int arr[100];
	
	scanf("%d",&n);
  while(n!=0)
  {
	arr[l]=n%10;
	l++;
	n=n/10;
  }
  for(f=0;f<l;f++)
     {	for(k=0;k<l-1;k++)
       {if(arr[k]>arr[k+1])
   	  {
          temp=arr[k];
    	  arr[k]=arr[k+1];
          arr[k+1]=temp;
          }
        }
      }

   for(i=0;i<=l;i++)
   {
 	if(arr[i]==arr[i+1])
	{j++;}
	else
	{
	printf("%d\t%d\n", arr[i],j);
	j=1;
	}
    }
   return 0;
}
