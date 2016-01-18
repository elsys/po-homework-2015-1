#include<stdio.h>
int main()
{
    int i, j, c, n, k=0;
    int arr[200], arr2[200]={0};

    scanf("%d",&n);

    for (i=0; i<n; ++i)
    {
        int nm, dp=0;
        scanf("%d",&nm);
        for(j=0; j<k; ++j)
        {
            if(arr[j]==nm)
            {
                arr2[j]=dp=1;
                break;
            }
        }
        if(!dp){
            arr[k++]=nm;
        }
    }

    for (c=i=0; i<k; ++i)
    {
        if(!arr2[i])printf("%d ",arr[c++]=arr[i]);
    }
    printf("\n");
    return 0;
}
