#include <stdio.h>

int main()
{
    char str, str2[7];
    int i, something[7], first, second, third;
    scanf("%c",&str);
    if(str == 'h')
    {
        scanf("%s",str2);
        for(i=0;i<6;i++)
        {
            if(str2[i] == '0') something[i] = 0;
            else if(str2[i] == '1') something[i] = 1;
            else if(str2[i] == '2') something[i] = 2;
            else if(str2[i] == '3') something[i] = 3;
            else if(str2[i] == '4') something[i] = 4;
            else if(str2[i] == '5') something[i] = 5;
            else if(str2[i] == '6') something[i] = 6;
            else if(str2[i] == '7') something[i] = 7;
            else if(str2[i] == '8') something[i] = 8;
            else if(str2[i] == '9') something[i] = 9;
            else if(str2[i] == 'a') something[i] = 10;
            else if(str2[i] == 'b') something[i] = 11;
            else if(str2[i] == 'c') something[i] = 12;
            else if(str2[i] == 'd') something[i] = 13;
            else if(str2[i] == 'e') something[i] = 14;
            else if(str2[i] == 'f') something[i] = 15;
        }
        first = something[0] * 16 + something[1];
        second = something[2] * 16 + something[3];
        third = something[4] * 16 + something[5];
        printf("rgb(%d, %d, %d)",first,second,third);
    }
    else if(str == 'd')
    {
        for(i=0;i<6;i++) something[i] = 0;
        scanf("%d, %d, %d",&something[0],&something[2],&something[4]);
        for(i=0;i<6;i=i+2)
        {
            something[i+1]=something[i]%16;
            something[i]=something[i]/16;
        }
        for(i=0;i<6;i++)
        {
            if(something[i] == 0) str2[i] = '0';
            else if(something[i] == 1) str2[i] = '1';
            else if(something[i] == 2) str2[i] = '2';
            else if(something[i] == 3) str2[i] = '3';
            else if(something[i] == 4) str2[i] = '4';
            else if(something[i] == 5) str2[i] = '5';
            else if(something[i] == 6) str2[i] = '6';
            else if(something[i] == 7) str2[i] = '7';
            else if(something[i] == 8) str2[i] = '8';
            else if(something[i] == 9) str2[i] = '9';
            else if(something[i] == 10) str2[i] = 'a';
            else if(something[i] == 11) str2[i] = 'b';
            else if(something[i] == 12) str2[i] = 'c';
            else if(something[i] == 13) str2[i] = 'd';
            else if(something[i] == 14) str2[i] = 'e';
            else if(something[i] == 15) str2[i] = 'f';
        }
            printf("#%c%c%c%c%c%c",str2[0],str2[1],str2[2],str2[3],str2[4],str2[5]);
    }
    return 0;
}
