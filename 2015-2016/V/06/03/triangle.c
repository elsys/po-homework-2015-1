#include <stdio.h>
 
int main(){
    int n,i=1,s=0,p=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      for(s=1;s<=n-i;s++)
        printf("  ");
      for(p=0;p!=2*i-1;){
        printf("* ");
        p++; 
       }
      printf("\n");
  }//Vseki red   
}
