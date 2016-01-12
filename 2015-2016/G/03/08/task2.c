 #include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int counter =0;
   char word[50];
   int base;
int answer =0;
   scanf("%s",word);
base = strlen(word);
   for(counter=0;counter<base;counter++)
   {
     if(word[counter]=='a'||word[counter]=='d'||word[counter]=='g'||word[counter]=='j'||word[counter]=='m'||word[counter]=='p'||word[counter]=='t'||word[counter]=='w'||word[counter]==' '||word[counter]=='A'||word[counter]=='D'||word[counter]=='G'||word[counter]=='J'||word[counter]=='M'||word[counter]=='P'||word[counter]=='T'||word[counter]=='W')
     {
         answer=answer+1;
     }

         if(word[counter]=='e'||word[counter]=='h'||word[counter]=='k'||word[counter]=='n'||word[counter]=='q'||word[counter]=='u'||word[counter]=='t'||word[counter]=='x'||word[counter]=='E'||word[counter]=='H'||word[counter]=='K'||word[counter]=='N'||word[counter]=='Q'||word[counter]=='U'||word[counter]=='T'||word[counter]=='X'|| word[counter] == 'b'||word[counter] == 'B')
         {
             answer=answer+2;
         }
         if(word[counter]=='c'||word[counter]=='f'||word[counter]=='i'||word[counter]=='l'||word[counter]=='o'||word[counter]=='r'||word[counter]=='v'||word[counter]=='y'||word[counter]=='C'||word[counter]=='F'||word[counter]=='I'||word[counter]=='L'||word[counter]=='O'||word[counter]=='R'||word[counter]=='V'||word[counter]=='Y')
         {
             answer = answer+3;
         }
         if(word[counter]=='s'||word[counter]=='z'||word[counter]=='S'||word[counter]=='Z')
         {
             answer = answer+4;
         }

   }
   printf("number of clicks:%d",answer);
   return(0);
}

