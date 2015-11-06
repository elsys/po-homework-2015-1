#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(){

    int letters[26][2];
    int counter, counterx, counterz, countera, counteri, counterj,counterb;
    int temp_letter1, temp_letter2;
    char input_string[80];

    scanf("%[^\n]s", input_string);

    for(countera = 0;countera<strlen(input_string); countera++){
        input_string[countera] = tolower(input_string[countera]);

    }

    for(counterx = 0; counterx < 26; counterx++){
        letters[counterx][0]=97+counterx;
        letters[counterx][1]=0;

    }

    for(counter = 0;counter<strlen(input_string);counter++){
        for(counterb = 0;counterb < 26;counterb++){
            if (input_string[counter] == (char) letters[counterb][0]){
                letters[counterb][1]=letters[counterb][1]+1;
            }
         }
     }

    for (counteri = 0; counteri < 26; counteri++){
        for (counterj = counteri + 1; counterj < 26; counterj++){
            if ((letters[counteri][1] < letters[counterj][1]) || ((letters[counteri][1] == letters[counterj][1]) && (letters[counteri][0] > letters[counterj][0]))){
                temp_letter1 = letters[counteri][0];
                temp_letter2 = letters[counteri][1];
                letters[counteri][0] = letters[counterj][0];
                letters[counteri][1] = letters[counterj][1];
                letters[counterj][0] = temp_letter1;
                letters[counterj][1] = temp_letter2;
            }
        }
    }

    for(counterz=0; counterz < 26; counterz++){
        if (letters[counterz][1]>0){
            printf("\n%c", (char) letters[counterz][0]);
            printf(": ");
            printf("%d", letters[counterz][1]);
            printf("\n");
        }
    }
return 0;
}
