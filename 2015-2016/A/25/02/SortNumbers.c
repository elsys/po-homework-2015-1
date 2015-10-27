#include <stdio.h>
int main(){
    int i,j,temp,nmb[1000],k;

    for(k=0;k<1000;k++){
        printf("\nEnter a number:  ");
        scanf("%d",&temp);
        if(temp==42)
            break;
        nmb[k]=temp;
    }
    for (i=0;i<k-1;i++){
		for (j=i+1;j<k;j++){
			if(nmb[i]>nmb[j]){
                temp=nmb[i];
                nmb[i]=nmb[j];
                nmb[j]=temp;
            }
        }
    }

    printf("\nThe numbers in sorted order:\n\n");
    for(i=0;i<k;i++){
       printf("%d  ",nmb[i]);
    }
    return 0;
}
