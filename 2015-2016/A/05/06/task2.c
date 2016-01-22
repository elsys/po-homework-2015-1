#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int counter,len,sum=0,i=0;
    char Sentence[160],character;
    while((character=getchar())!='\n')
    {
        if(character>='a' && character<='z')
            {Sentence[i]=character;
            i++;}
	else if(character==' ')
            {Sentence[i]=character;
            i++;}
        else
            return 0;
    }
    len=strlen(Sentence);

    for(counter=0;counter<len;counter++)
    {
        if(Sentence[counter]>='a' && Sentence[counter]<='c')
                {
                    if(Sentence[counter]=='a')
                        sum=sum+1;
                    if(Sentence[counter]=='b')
                        sum=sum+2;
                    if(Sentence[counter]=='c')
                        sum=sum+3;
                }
        if(Sentence[counter]>='d' && Sentence[counter]<='f')
                {
                    if(Sentence[counter]=='d')
                        sum=sum+1;
                    if(Sentence[counter]=='e')
                        sum=sum+2;
                    if(Sentence[counter]=='f')
                        sum=sum+3;
                }
        if(Sentence[counter]>='g' && Sentence[counter]<='i')
                {
                    if(Sentence[counter]=='g')
                        sum=sum+1;
                    if(Sentence[counter]=='h')
                        sum=sum+2;
                    if(Sentence[counter]=='i')
                        sum=sum+3;
                }
        if(Sentence[counter]>='j' && Sentence[counter]<='l')
                {
                    if(Sentence[counter]=='j')
                        sum=sum+1;
                    if(Sentence[counter]=='k')
                        sum=sum+2;
                    if(Sentence[counter]=='l')
                        sum=sum+3;
                }
        if(Sentence[counter]>='m' && Sentence[counter]<='o')
                {
                    if(Sentence[counter]=='m')
                        sum=sum+1;
                    if(Sentence[counter]=='n')
                        sum=sum+2;
                    if(Sentence[counter]=='o')
                        sum=sum+3;
                }
        if(Sentence[counter]>='p' && Sentence[counter]<='s')
                {
                    if(Sentence[counter]=='p')
                        sum=sum+1;
                    if(Sentence[counter]=='q')
                        sum=sum+2;
                    if(Sentence[counter]=='r')
                        sum=sum+3;
                    if(Sentence[counter]=='s')
                        sum=sum+4;
                }
        if(Sentence[counter]>='t' && Sentence[counter]<='v')
                {
                    if(Sentence[counter]=='t')
                        sum=sum+1;
                    if(Sentence[counter]=='u')
                        sum=sum+2;
                    if(Sentence[counter]=='v')
                        sum=sum+3;
                }
        if(Sentence[counter]>='w' && Sentence[counter]<='z')
                {
                    if(Sentence[counter]=='t')
                        sum=sum+1;
                    if(Sentence[counter]=='u')
                        sum=sum+2;
                    if(Sentence[counter]=='v')
                        sum=sum+3;
                    if(Sentence[counter]=='z')
                        sum=sum+4;
                }
        else if(Sentence[counter]==' ' && Sentence[counter]==' ')
                sum=sum+1;

            }
    printf("\n%d",sum);
    return 1;
}
