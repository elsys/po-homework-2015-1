#include <stdio.h>
#include <string.h>

int main()
{
    char word[50];
    int i=0;
    int check=0;
    scanf("%s",word);
    for(i=0;i<strlen(word)/2;i++)
    {
        if(word[i]==word[(strlen(word)-1)- i]){
           check=1;
        }else{check=0; break;}
    }
   printf("%d",check);





    return 0;
}
