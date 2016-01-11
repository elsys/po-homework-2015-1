#include <stdio.h>
#include <stdlib.h>

int main()
{
    char words[160];
    int counter,clicks=0;

    scanf("%[^\n]s",&words);

  for(counter=0;words[counter]!=0;counter++)
  {
    if (words[counter]== 'a' || words[counter]== 'd' || words[counter]== 'g' || words[counter]== 'j' || words[counter]== 'm' || words[counter]== 'p' || words[counter]== 't' || words[counter]== 'w') clicks += 1;
    if (words[counter]== 'b' || words[counter]== 'e' || words[counter]== 'h' || words[counter]== 'k' || words[counter]== 'n' || words[counter]== 'q' || words[counter]== 'u' || words[counter]== 'x') clicks += 2;
    if (words[counter]== 'c' || words[counter]== 'f' || words[counter]== 'i' || words[counter]== 'l' || words[counter]== 'o' || words[counter]== 'r' || words[counter]== 'v' || words[counter]== 'y') clicks += 3;
    if (words[counter]== 's' || words[counter]== 'z') clicks += 4;
    if (words[counter]== ' ') clicks += 1;
  }

                printf("%d",clicks);


        return 0;



}
