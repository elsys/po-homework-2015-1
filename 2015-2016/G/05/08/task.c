#include <stdio.h>
#include <string.h>

int clicks(char sentence[160] );

int main()
{
    char sentence[160];

    scanf("%[^\n]s",sentence);

    clicks(sentence);

    return 0;
}

int clicks(char sentence[160] )
{

    int l,i=0,answer=0;

    l=strlen(sentence);

    while(l>i)
    {

if(sentence[i]=='a' || sentence[i]== 'd' || sentence[i]== 'g' || sentence[i]== 'j' || sentence[i]=='m' || sentence[i]== 'p' || sentence[i]== 't' || sentence[i]== 'w' || sentence[i]== ' ')
answer=answer+1;

if(sentence[i]=='b' || sentence[i]== 'e' || sentence[i]== 'h' || sentence[i]== 'k' || sentence[i]=='n' || sentence[i]== 'q' || sentence[i]== 'u' || sentence[i]== 'x') answer=answer+2;

if(sentence[i]=='c' || sentence[i]== 'f' || sentence[i]== 'i' || sentence[i]== 'l' || sentence[i]=='o' || sentence[i]== 'r' || sentence[i]== 'v' || sentence[i]== 'y') answer=answer+3;

if(sentence[i]=='s' || sentence[i]== 'z') answer=answer+4;
i++;

    }

 printf("%d", answer);
 return 0;

}
