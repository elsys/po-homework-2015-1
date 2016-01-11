#include <stdio.h>
#include <stdlib.h>

int main()
{
    char words[159];
    int counter,sum=0;

    scanf("%[^\n]s",&words);

  for(counter=0;words[counter]!=0;counter++){
    if (words[counter]== 'a' || words[counter]== 'd' || words[counter]== 'g' || words[counter]== 'j' || words[counter]== 'm' || words[counter]== 'p' || words[counter]== 't' || words[counter]== 'w') sum += 1;
    if (words[counter]== 'b' || words[counter]== 'e' || words[counter]== 'h' || words[counter]== 'k' || words[counter]== 'n' || words[counter]== 'q' || words[counter]== 'u' || words[counter]== 'x') sum += 2;
    if (words[counter]== 'c' || words[counter]== 'f' || words[counter]== 'i' || words[counter]== 'l' || words[counter]== 'o' || words[counter]== 'r' || words[counter]== 'v' || words[counter]== 'y') sum += 3;
    if (words[counter]== 's' || words[counter]== 'z') sum += 4;
    if (words[counter]== 32) sum += 1;
  }
  printf("%d",sum);

return 0;
    }
