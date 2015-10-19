#include <stdio.h>
int main()
{
    char sentence[100];
    char stop[5]="STOP";
    int counter,check;
    printf("Write sentences and press Enter:\n");
    while(1)
    {
        check=0;
        fgets(sentence, 100, stdin);
        for(counter=0;sentence[counter]!='\0';counter++)
        {
            if(sentence[counter]>='a'&&sentence[counter]<='z') sentence[counter]=sentence[counter]-('a'-'A');
            if(sentence[counter]==stop[check]&&check<4) check++;
            else if(check<4) check=0;
        }
        printf("%s",sentence);
        if(check==4) break;
    }
    return 0;
}
