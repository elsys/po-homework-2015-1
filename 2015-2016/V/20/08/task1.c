#define _GNU_SOURCE 
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char mode;
    scanf("%c ", &mode);
    
    switch (mode) {
        case 'd':{
            int red, green, blue;
            scanf("%d, %d, %d", &red, &green, &blue);
            
            if (red   < 0 || red   > 255 ||
                green < 0 || green > 255 ||
                blue  < 0 || blue  > 255) {
                exit(1);
            }
            char hex_number[7];
            sprintf(hex_number, "%x%.2x%.2x", red, green, blue);
            printf("#%s\n", hex_number);
        } break;
            
        case 'h': {
            char *line;
            size_t n;
            getline(&line, &n, stdin);
            
            if (line[0] != '#') {
                exit(1);
            }
            char hex_number[3];
            hex_number[2] = '\0';
            
            int red, green, blue;
            
            hex_number[0] = line[1];
            hex_number[1] = line[2];
            red = (int)strtol(hex_number, NULL, 16);
            
            hex_number[0] = line[3];
            hex_number[1] = line[4];
            green = (int)strtol(hex_number, NULL, 16);
            
            hex_number[0] = line[5];
            hex_number[1] = line[6];
            blue = (int)strtol(hex_number, NULL, 16);
            
            printf("rgb(%d, %d, %d)\n", red, green, blue);

        } break;        
        default:
            exit(1);
}
	return 0;
}









