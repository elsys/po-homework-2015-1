#include <stdio.h>

int main(){

int i=0,n=0,j,min;
int arr[1000];

for(i=0;i<999;i++)
{
    scanf("%d",&arr[i]);
    if(arr[i]==42)break;
n++;
}

for(i = 0; i < n-1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
                min = j;

        }

        if(i != min)
        {
            int x = arr[i];
            arr[i] = arr[min];
            arr[min] = x;
        }
    }
    for(i=0;i<n;i++)

        printf("\n%d",arr[i]);

         return 0;
}

