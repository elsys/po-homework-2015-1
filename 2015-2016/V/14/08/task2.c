#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, result = 0;
    char sentence[100];

    fgets(sentence, 100, stdin);

    int asdf = strlen (sentence);

    for (i; i<asdf; i++) {
        switch (sentence[i]) {
            case 'a':
            case 'd':
            case 'g':
            case 'j':
            case 'm':
            case 'p':
            case 't':
            case 'w':
            case ' ':
                result++;
                break;

            case 'b':
            case 'e':
            case 'h':
            case 'k':
            case 'n':
            case 'q':
            case 'u':
            case 'x':
                result += 2;
                break;

            case 'c':
            case 'f':
            case 'i':
            case 'l':
            case 'o':
            case 'r':
            case 'v':
            case 'y':
                result += 3;
                break;

            case 's':
            case 'z':
                result += 4;
                break;

        }
    }

    printf ("%d", result);

    return 0;
}
