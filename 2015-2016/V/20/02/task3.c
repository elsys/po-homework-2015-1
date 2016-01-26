#include <stdio.h>
#include <string.h>
int main(){
    
	int a[1000],n,c,d,swap;
	for(n=0;n<1000;n++){
        	printf(":\n");
        	scanf("%d",&c);
        	if(c==42)
            	break;
       	else
		a[n]=c;
   	 }
	for(c=0;c<(n-1);c++){
        
		for(d=0;d<n-c-1;d++){
			if(a[d] > a[d+1]){
				swap=a[d];
				a[d]=a[d+1];
				a[d+1]=swap;
			}
		}
	}
    		printf(":\n");
	for(c=0;c<n;c++)
	printf("%d\n",a[c]);
    return 0;
    }
