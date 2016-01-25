#include <stdio.h>
#include <stdlib.h>

int main()

{
    char sms[160] = { 0 };
    scanf("%[^\n]",&sms);
    int button=0,i=0;
    while (i<160)
    {

        switch(sms[i])
        {
            case 'a':
            case 'd':
            case 'g':
            case 'j':
            case 'm':
            case 'p':
            case 't':
            case 'w':
            case ' ':
                    button++; break;
            case 'b':
            case 'e':
            case 'h':
            case 'k':
            case 'n':
            case 'q':
            case 'u':
            case 'x':
                    button+=2; break;
            case 'c':
            case 'f':
            case 'i':
            case 'l':
            case 'o':
            case 'r':
            case 'v':
            case 'y':
                    button+=3; break;
            case 's':
            case 'z':
                    button+=4; break;

            }

                i++;

            }
    printf("%d",button);

	return 0;
}
