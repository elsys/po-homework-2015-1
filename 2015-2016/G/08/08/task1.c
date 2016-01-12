#include <stdio.h>

char hex_val(int);
int dec_val(char);
void hex_to_dec(int dec[3]);
void dec_to_hex(char hex[6]);


int main()
{

    char var;
    int dec[3] = {0};
    char hex[6];

    scanf("%c",&var);

    if(var=='h')
    {
        hex_to_dec(dec);

        printf("rgb(%d, %d, %d)",dec[0],dec[1],dec[2]);

    }

    if(var=='d')
    {

         dec_to_hex(hex);

         printf("#%s",hex);

    }

    return 0;
}

void hex_to_dec(int dec[3])
{

    char allnumb[6];
    int deccount, hexcount1, hexcount2;

    scanf("%s",allnumb);


    for(deccount=0, hexcount1=0, hexcount2=1; deccount<3 || hexcount1<5 || hexcount2<6 ; deccount++,hexcount1+=2,hexcount2+=2)
    {

        dec[deccount]=dec_val(allnumb[hexcount1]) *16+ dec_val(allnumb[hexcount2]);

    }

}

void dec_to_hex(char hex[7])
{

int dec[3],deccount,hexcount,helper;

for(deccount=0;deccount<3;deccount++){

    scanf("%d",&dec[deccount]);

}

for(deccount=2,hexcount=5;deccount>=0 || hexcount>=0;hexcount--){

helper=dec[deccount]%16;
dec[deccount]=dec[deccount]/16;
hex[hexcount]=hex_val(helper);
if(dec[deccount]==0)deccount--;
}

}

int dec_val(char hex)
{

    switch(hex)
    {

    case '0':
        return 0;
        break;
    case '1':
        return 1;
        break;
    case '2':
        return 2;
        break;
    case '3':
        return 3;
        break;
    case '4':
        return 4;
        break;
    case '5':
        return 5;
        break;
    case '6':
        return 6;
        break;
    case '7':
        return 7;
        break;
    case '8':
        return 8;
        break;
    case '9':
        return 9;
        break;
    case 'a':
        return 10;
        break;
    case 'b':
        return 11;
        break;
    case 'c':
        return 12;
        break;
    case 'd':
        return 13;
        break;
    case 'e':
        return 14;
        break;
    case 'f':
        return 15;
        break;

    }

    return 0;
}

char hex_val(int dec)
{

    switch(dec)
    {

    case 0:
        return '0';
        break;
    case 1:
        return '1';
        break;
    case 2:
        return '2';
        break;
    case 3:
        return '3';
        break;
    case 4:
        return '4';
        break;
    case 5:
        return '5';
        break;
    case 6:
        return '6';
        break;
    case 7:
        return '7';
        break;
    case 8:
        return '8';
        break;
    case 9:
        return '9';
        break;
    case 10:
        return 'a';
        break;
    case 11:
        return 'b';
        break;
    case 12:
        return 'c';
        break;
    case 13:
        return 'd';
        break;
    case 14:
        return 'e';
        break;
    case 15:
        return 'f';
        break;
    }

    return 0;
}
