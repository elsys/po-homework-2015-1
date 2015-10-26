#include <stdio.h>
#include <string.h>

void main(){
 
   char a[50],b; int n,i,l;
      printf("Vav. a:");
      fgets(a,sizeof(a),stdin);
      l=strlen(a)-1;//Poradi nuliviq bite;
      printf("%d",l);
   for(i=0;i<l;i++,l--){
     b=a[i]; 
     a[i]=a[l];
     a[l]=b;

  }
   printf("\n %s",a);
 
}
