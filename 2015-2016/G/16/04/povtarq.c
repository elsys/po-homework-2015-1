#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    int i=-1;
    int x;
    int e;
    int t;
    int p=1;
    int numbcounter=0;
    int arr[11]={0};
    int opa;


    printf("Input a number :");
    scanf("%d",&n);

    for(;n%10!=0;n = n / 10){
    switch(n%10){
    case 0:arr[0]++;break;
    case 1:arr[1]++;break;
    case 2:arr[2]++;break;
    case 3:arr[3]++;break;
    case 4:arr[4]++;break;
    case 5:arr[5]++;break;
    case 6:arr[6]++;break;
    case 7:arr[7]++;break;
    case 8:arr[8]++;break;
    case 9:arr[9]++;break;
    }
    }



    for(i=0;i<11;i++){

        if(arr[i]>1)
    {
                arr[i]=i;
                printf("\nPovtarq se : %d  ",arr[i]);
    }
    }
        return 0;
}
