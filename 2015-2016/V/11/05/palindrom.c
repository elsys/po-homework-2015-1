#include <stdio.h>
#include <string.h>
int palindrom(int l,char s[]);
int main()
{

  int i=0,l;
    char s[50];
    scanf("%s",&s);
    l=strlen(s)-1;
    if(palindrom(l,s)){
        printf("Yes");
    }
    else
        printf("No");
}
int palindrom(int l,char s[]){
    int i;
    for(i=0;i<l;i++){
    if(s[i]!=s[l]){
        return 0;
    }
    l--;
    }
    return 1;
}
