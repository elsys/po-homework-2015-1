#include <stdio.h>

int main(){
	int i,j,n;
	printf("Vav. broi redove:");
  	scanf("%d",&n);
  	int a[n][n];
  	for(i=0;i<n;i++){
  		  for(j=0;j<n;j++){
      			printf("Vav. chislo%d na red %d:",j+1,i+1);
     			scanf("%d",&a[i][j]);
    		}
  	}
  	int magic=0;
  	for(i=0;i<n;i++){
  		magic=magic+a[0][i];
  	}
 	 int p=0,wrong=0;
  	for(i=0;i<n;i++,p=0){
		wrong=0;
       		for(j=0;j<n;j++){
     			p=p+a[i][j];
    			p=p+a[j][i];
   			p=p+a[j][j];
    		        p=p+a[j][n-(j+1)];
   		 }//for-j;
   		 if(p==magic*4){
    		   wrong=1;  
		 }
        }//for-i;
  	if(wrong==1)
	        printf("Square is magical");
        if(wrong==0)
	        printf("Square is not magical");	
}//main;
