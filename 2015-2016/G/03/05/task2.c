 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word[20];
    int i=0;
    int length=0;
    int flag=0;
    printf("enter word=");scanf("%s",word);
    length=strlen(word);
    for(i=0;i<length;i++)
    {
        if(word[i]==word[length-1]){
           flag=1;
        }else{printf("0"); break;}
length--;
    }
    if(flag==1){printf("%d",flag);}





    return 0;
}


