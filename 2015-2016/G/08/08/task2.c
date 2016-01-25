#include <stdio.h>
#include <string.h>

int klicks(char sentence[160] );

int main()
{
    char sentence[160];

    scanf("%[^\n]s",sentence);

    klicks(sentence);

    return 0;
}


int klicks(char sentence[160] )
{

    int l,i,klick=0;

    l=strlen(sentence);

    for(i=0; i<l; i++)
    {

if(sentence[i]=='a' || sentence[i]== 'd' || sentence[i]== 'g' || sentence[i]== 'j' || sentence[i]=='m' || sentence[i]== 'p' || sentence[i]== 't' || sentence[i]== 'w' || sentence[i]== ' ')
klick+=1;

if(sentence[i]=='b' || sentence[i]== 'e' || sentence[i]== 'h' || sentence[i]== 'k' || sentence[i]=='n' || sentence[i]== 'q' || sentence[i]== 'u' || sentence[i]== 'x') klick+=2;

if(sentence[i]=='c' || sentence[i]== 'f' || sentence[i]== 'i' || sentence[i]== 'l' || sentence[i]=='o' || sentence[i]== 'r' || sentence[i]== 'v' || sentence[i]== 'y') klick+=3;

if(sentence[i]=='s' || sentence[i]== 'z') klick+=4;

    }

    printf("%d", klick);

    return 0;

}
