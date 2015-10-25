#include<stdio.h>
#include<string.h>

int n(char);

int main(){

    char r[1000];
    int i=0;
    int number=0;

    printf("Enter roman number:\n");
    scanf("%s",r);

    while(r[i]){

         if(n(r[i])<0){
             printf("Invalid number",r[i]);
             return 0;
         }

         if(n(r[i])>256){
             printf("Invalid number",r[i]);
             return 0;
         }


         if((strlen(r)-i) > 2){
             if(n(r[i]) < n(r[i+2])){
                 printf("Invalid number");
                 return 0;
             }
         }

         if(n(r[i]) >= n(r[i+1]))
             number = number + n(r[i]);
         else{
             number = number + (n(r[i+1]) - n(r[i]));
             i++;
         }
         i++;
    }

    printf("%d",number);

    return 0;

}

int n(char c){

    int s=0;

    switch(c){
         case 'I': s = 1; break;
         case 'V': s = 5; break;
         case 'X': s = 10; break;
         case 'L': s = 50; break;
         case 'C': s = 100; break;
         case '\0': s = 0; break;
    }

    return s;
}
