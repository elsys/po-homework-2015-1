#include<stdio.h>

int main (){
 
  char sentence[1000];
  scanf("%[^\n]s", sentence);
  
  int times = 0; 
 
  for(int counter = 0; sentence[counter] != '\0'; counter++)
   {
     if(sentence[counter] < 115)
       {
         if(sentence[counter] == 32) times++;
        
         else 
           {
             if((sentence[counter] - 97) % 3 == 0) times++;
             if((sentence[counter] - 98) % 3 == 0) times += 2;
             if((sentence[counter] - 99) % 3 == 0) times += 3;
           }
       }
       
     else 
       {
         if(sentence[counter] == 115 || sentence[counter] == 122) times += 4;
         if(sentence[counter] == 116 || sentence[counter] == 119) times++;
         if(sentence[counter] == 117 || sentence[counter] == 120) times += 2;
         if(sentence[counter] == 118 || sentence[counter] == 121) times += 3;
       }
   }
  
   printf("%d", times);

}
