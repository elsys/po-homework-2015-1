 #include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int counter =0;
   char word[50];
   int base;
int answer =0;
   scanf("%[^\n]s",word);
base = strlen(word);
   for(counter=0;counter<base;counter++)
   {
switch(word[counter])
{
case ' ':
answer +=1;
   break;
 case 'a': 
     answer+=1;
    break;
     case 'b':
     answer+=2;
     break;
     case'c':
          answer+=3;
      break;
     case'd':
          answer+=1;
      break;
     case'e':
          answer+=2;
     break;
     case'f':
          answer+=3;
     break;
          
     case'g':
          answer+=1;
     break;
     case'h':
          answer+=2;
      break;
     case'i':
          answer+=3;
        break;
     case'j':
          answer+=1;
      break;
     case'k' :
          answer+=2;
      break;
     case'l':
          answer+=3;
        break;
     case 'm':
          answer+=1;
          break; 
     case 'n':
          answer+=2;
        break;
     case 'o':
          answer+=3;
        break;
     case 'p':
          answer+=1;
break;
     case 'q':
          answer+=2;
break;
     case 'r':
          answer+=3;
break;
     case 's':
          answer+=4;
break;
     case't':
          answer+=1;
break;
     case 'u':
          answer+=2;
break;
     case 'v':
          answer+=3;
break;
     case'w': 
          answer+=1;
break;
     case 'x':
          answer+=2;
break;
     case 'y':
          answer+=3;
break;
     case'z':
          answer+=4;
break; 


}
   }
   printf("number of clicks:%d",answer);
   return(0);
}

