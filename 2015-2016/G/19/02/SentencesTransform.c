#include <stdio.h>
#include <string.h>

void main ()
{
    char sentences[1000];
    int isStop = 1;
    int counter;
    char ch;
    startinnerloop:

    gets(sentences);
    counter = 0;
	startouterloop:
		ch = sentences[counter];
		sentences[counter] = toupper(ch);
		counter++;
	 if(sentences[counter] != '\0'){
        goto startouterloop;
	 }


    isStop = strcmp(sentences, "STOP") != 0;

    if(isStop)
    {
        printf("%s\n", sentences);
        goto startinnerloop;
    }
}