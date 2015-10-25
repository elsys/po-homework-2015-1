#include <stdio.h>
int main(){
    int i,j,temp,nmb[1000],br;
    for(br=0;br<1000;br++){
        printf("\nEnter a number:  ");
        scanf("%d",&temp);
        if(temp==42)
            break;
        nmb[br]=temp;
    }
    for (i=0;i<br-1;i++){
		for (j=0;j<br-1-i;j++){
			if(nmb[j]>nmb[j+1]){
                temp=nmb[j];
                nmb[j]=nmb[j+1];
                nmb[j+1]=temp;
            }
        }
    }
    printf("\nThe numbers in sorted order:\n\n");
    for(i=0;i<br;i++){
       printf("%d  ",nmb[i]);
    }
    return 0;
}
