#include<stdio.h>
#include<string.h>
#define maxnum 100

int main()
{
    char s[maxnum];
    int i,l;


    do
    {
        scanf("%s",s);
        l = strlen(s);
         if(s[0]== 'S' && s[1]=='T' && s[2]=='O' && s[3]=='P'){
            break;
         }

        else{
            for(i = 0 ; i < strlen(s) ; i++)
            {
               if(s[i]>='a' && s[i]<='z')
                    printf("%c",s[i] + ('A'-'a'));
                else printf("%c",s[i]);
            }
        }
    }while(1);
    return 0;
}

