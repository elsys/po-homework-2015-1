#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50];
    int i;
    int arra2[]={0,0,0,0,0,0,0,0,0,0};

    int y;

    int n;
    printf("Input a number : ");
    scanf("%d",&n);
    int x=n;

        for(i=0;x!=0;i++){
        n = x % 10 ;

        arr[i]=n;

        x = x / 10 ;
    }
    y = i;
    for(i=0;i<y;i++){
    switch(arr[i]){
    case 0:arra2[0]++;break;
    case 1:arra2[1]++;break;
    case 2:arra2[2]++;break;
    case 3:arra2[3]++;break;
    case 4:arra2[4]++;break;
    case 5:arra2[5]++;break;
    case 6:arra2[6]++;break;
    case 7:arra2[7]++;break;
    case 8:arra2[8]++;break;
    case 9:arra2[9]++;break;


    }

    }
for (i = 0; i < 10; i++)
{
if (arra2[i] != 0)
{
printf("\n%d - %d",i,arra2[i]);
}


}
    return 0;
}
