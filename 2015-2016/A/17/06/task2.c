#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char length[160];
    int i=0,sum=0,n;
    fgets(length,160,stdin);
    n=strlen(length);

    for(i = 0 ; i < n ; i++)
    {
            if( length[i] == ' '){sum=sum+1;}
            if( length[i] == 'a'){sum=sum+1;}
            if( length[i] == 'b'){sum=sum+2;}
            if( length[i] == 'c'){sum=sum+3;}
            if( length[i] == 'd'){sum=sum+1;}
            if( length[i] == 'e'){sum=sum+2;}
            if( length[i] == 'f'){sum=sum+3;}
            if( length[i] == 'g'){sum=sum+1;}
            if( length[i] == 'h'){sum=sum+2;}
            if( length[i] == 'i'){sum=sum+3;}
            if( length[i] == 'j'){sum=sum+1;}
            if( length[i] == 'k'){sum=sum+2;}
            if( length[i] == 'l'){sum=sum+3;}
            if( length[i] == 'm'){sum=sum+1;}
            if( length[i] == 'n'){sum=sum+2;}
            if( length[i] == 'o'){sum=sum+3;}
            if( length[i] == 'p'){sum=sum+1;}
            if( length[i] == 'q'){sum=sum+2;}
            if( length[i] == 'r'){sum=sum+3;}
            if( length[i] == 's'){sum=sum+4;}
            if( length[i] == 't'){sum=sum+1;}
            if( length[i] == 'u'){sum=sum+2;}
            if( length[i] == 'v'){sum=sum+3;}
            if( length[i] == 'w'){sum=sum+1;}
            if( length[i] == 'x'){sum=sum+2;}
            if( length[i] == 'y'){sum=sum+3;}
            if( length[i] == 'z'){sum=sum+4;}


    }
    printf("%d",sum);
    return 0;
}
