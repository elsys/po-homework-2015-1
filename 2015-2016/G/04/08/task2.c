#include <stdio.h>
#include<string.h>
  int main()
 {
 
 char sentence[160];
 int counter;
 int answer=0;
 
scanf("%[^\n]s",sentence);
 
int length = strlen(sentence);
      
 for(counter = 0;counter < length;counter++ )
{
      
 switch(sentence[counter])
{
case 'a' :answer += 1;break;
case 'd' :answer += 1;break;
case ' ' :answer += 1;break;
case 'g' :answer += 1;break;
case 'j' :answer += 1;break;
case 'm' :answer += 1;break;
case 'p' :answer += 1;break;
case 't' :answer += 1;break;
case 'w' :answer += 1;break;
case 'b' :answer += 2;break;
case 'e' :answer += 2;break;
case 'h' :answer += 2;break;
case 'k' :answer += 2;break;
case 'n' :answer += 2;break;
case 'q' :answer += 2;break;
case 'u' :answer += 2;break;
case 'x' :answer += 2;break;
case 'c' :answer += 3;break;
case 'f' :answer += 3;break;
case 'i' :answer += 3;break;
case 'l' :answer += 3;break;
case 'o' :answer += 3;break;
case 'r' :answer += 3;break;
case 'v' :answer += 3;break;
case 'y' :answer += 3;break;
case 's' :answer += 4;break;
case 'z' :answer += 4;break;
}
}
 printf("%d",answer);
 
 return 0;
 
}
 
 
