#include <stdio.h>
#include <string.h>

int main(){
   int length,index,counter=0;
   char str[160];
   scanf ( "%[^\n]s", str );
   length=strlen (str) ;
   for ( index = 0; index < length; index ++ ){

        if (str[index] == 'a'
           || str[index] == 'd'
           || str[index] == 'g'
           || str[index] == 'j'
           || str[index] == 'm'
           || str[index] == 'p'
           || str[index] == 't'
           || str[index] == 'w'
           || str[index] == ' '){

           counter++;
           }

        if (str[index] == 'b'
            || str[index] == 'e'
            || str[index] == 'h'
            || str[index] == 'k'
            || str[index] == 'n'
            || str[index] == 'q'
            || str[index] == 'u'
            || str[index] == 'x'){

            counter += 2;
         }

        if (str[index] == 'c'
            || str[index] == 'f'
            || str[index] == 'i'
            || str[index] == 'l'
            || str[index] == 'o'
            || str[index] == 'r'
            || str[index] == 'v'
            || str[index] == 'y'){

          counter += 3;
        }

       if (str[index] == 's' || str[index] == 'z'){
          counter += 4;

        }

   }

    printf("%d\n", counter);

    return 0;
}
