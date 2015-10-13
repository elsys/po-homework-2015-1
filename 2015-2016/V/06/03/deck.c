#include<stdio.h>
#include<string.h>

int main(){
   char a[13]; int b,i;
   printf("Vav. teste:");
   for(i=0;i<13;i++){
     b=getchar();
     if(b>'1' && b<='9')
        a[i]=(int)b-48;
     else
      switch(b){
        case 'T': a[i]=10; break;
        case 'J': a[i]=11; break;
        case 'Q': a[i]=12; break;
        case 'K': a[i]=13; break;
        case 'A': a[i]=14; break;
        }//switch input;
   }//for input;

     int l=2,s=0;
  for(i=0;i<13;i++){
     for(s=0;i<13;s++);{
        if(a[s]==l){
          a[s]==l;
          break; 
         }
         l++; 
      }//for1
       if(l>=10 && l<=14)
         switch(l){
          case 10: printf("T"); break;
          case 11: printf("J"); break;
          case 12: printf("Q"); break;
          case 13: printf("K"); break;
          case 14: printf("A"); break;
        }//switch;
       else
         printf("%d",l); 
   }//for

}//main
