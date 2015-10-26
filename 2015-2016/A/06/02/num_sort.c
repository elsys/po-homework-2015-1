#include <stdio.h>
#include <stdlib.h>
void main(void)
{
int a;
int b;
int c;
int s;
int i=0;
int count;
int number;
int arr[1000];
count=0;
while(count<1000)
            {
        count=count+1;
        printf("Enter a number:");
        scanf("%d", &arr[count]);
        if(arr[count]==42)
            {
                break;
            }
            a=count;
        }
    a=a+1;
    b=0;
    while(b< (a-1))
    {
        b=b+1;
         for (c = 0 ; c < a - c - 1; c=c+1)
    {
      if (arr[c] > arr[c+1])
      {
        s=arr[c];
        arr[c]=arr[c+1];
        arr[c+1]=s;
      }
    }
    }

  for(count=0;count<a;count=count+1)
    {
            printf("%d\n", arr[count]);
    }
}
