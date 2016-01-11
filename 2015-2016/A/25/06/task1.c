#include <stdio.h>
#include <string.h>
#define MAX 10

void DecToHex(int);
int HexToDec(char*, int);


int main(){
    int red, green, blue;
    char type, hex[MAX], i = 1;

    type = getchar();

    if(type == 'd'){
        scanf("%d,%d,%d", &red, &green, &blue);

        printf("#");
        DecToHex(red);
        DecToHex(green);
        DecToHex(blue);
    }

    if(type == 'h'){
        scanf("%s", hex);

        if(hex[0] != '#')
            return 0;

      red = HexToDec(hex,i);
      i+=2;

      green = HexToDec(hex,i);
      i+=2;

      blue = HexToDec(hex,i);

      printf("rgb(%d,%d,%d)", red, green, blue);

    }

    else
        return 0;


return 0;
}

void DecToHex(int color){
    char hex[MAX];
    int temp, i = 0, k;

    if(color == 0){
        for(i = 0; i < 2; i++)
            hex[i] = '0';
    }

    else
        while(color != 0){
            temp = color % 16;

            if( temp < 10)
                temp = temp + '0';

            else
                temp = temp + 87;

            hex[i] = temp;
            color = color / 16;
            i++;
        }

    for(k = i-1; k >= 0; k--)
        printf("%c", hex[k]);

}

int HexToDec(char* hex, int i){
    int intensity = 0;

    if(hex[i] >= 'a' && hex[i] <= 'f')
        intensity += (hex[i] - 87) * 16;

    else
        intensity += (hex[i] - '0')*16;

    if(hex[i+1] >= 'a' && hex[i+1] <= 'f')
        intensity += (hex[i+1] - 87);

    else
        intensity += (hex[i+1] - '0');

    return intensity;
}
