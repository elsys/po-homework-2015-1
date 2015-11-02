#include<stdio.h>

int main(){

    int index = 0;
    int counter = 0;
    char help;
    char card[13];

    scanf("%s[^ \n]", card);

    for(index = 0; index < 13; index++)
    {
        for(counter = 0; counter < 13; counter++)
        {
            if(card[counter] == '2')
            {
                help = card[0];
                card[0] = card[counter];
                card[counter] = help;
            }
            
            if(card[counter] == '3')
            {
                help = card[1];
                card[1] = card[counter];
                card[counter] = help;
            }
            
            if(card[counter] == '4')
            {
                help = card[2];
                card[2] = card[counter];
                card[counter] = help;
            }
            
            if(card[counter] == '5')
            {
                help = card[3];
                card[3] = card[counter];
                card[counter] = help;
            }
            
            if(card[counter] == '6')
            {
                help = card[4];
                card[4] = card[counter];
                card[counter] = help;
            }
            
            if(card[counter] == '7')
            {
                help = card[5];
                card[5] = card[counter];
                card[counter] = help;
            }
            
            if(card[counter] == '8')
            {
                help = card[6];
                card[6] = card[counter];
                card[counter] = help;
            }
            
            if(card[counter] == '9')
            {
                help = card[7];
                card[7] = card[counter];
                card[counter] = help;
            }
            
            if(card[counter] == 'T')
            {
                help = card[8];
                card[8] = card[counter];
                card[counter] = help;
            }
            
            if(card[counter] == 'J')
            {
                help = card[9];
                card[9] = card[counter];
                card[counter] = help;
            }
            
            if(card[counter] == 'Q')
            {
                help = card[10];
                card[10] = card[counter];
                card[counter] = help;
            }
            
            if(card[counter] == 'K')
            {
                help = card[11];
                card[11] = card[counter];
                card[counter] = help;
            }
            
            if(card[counter] == 'A')
            {
                help = card[12];
                card[12] = card[counter];
                card[counter] = help;
            }
        }
    }
    
    for(counter = 0; counter < 13; counter++)
        printf("%c", card[counter]);
       
    printf("\n");

    return 0;
}
