#include <stdio.h>
#include <stdlib.h>

int main()
{

    char s[100];

    int alphabet[26] = { 0 };
    int i,l;

    scanf("%[^\n]c", s);


    l=strlen(s)-1;

    for(i=0; i<=l; i++)
    {

        if(s[i] == 'a' || s[i] == 'A') alphabet[0]++;
        if(s[i] == 'b' || s[i] == 'B') alphabet[1]++;
        if(s[i] == 'c' || s[i] == 'C') alphabet[2]++;
        if(s[i] == 'd' || s[i] == 'D') alphabet[3]++;
        if(s[i] == 'e' || s[i] == 'E') alphabet[4]++;
        if(s[i] == 'f' || s[i] == 'F') alphabet[5]++;
        if(s[i] == 'g' || s[i] == 'G') alphabet[6]++;
        if(s[i] == 'h' || s[i] == 'H') alphabet[7]++;
        if(s[i] == 'i' || s[i] == 'I') alphabet[8]++;
        if(s[i] == 'j' || s[i] == 'J') alphabet[9]++;
        if(s[i] == 'k' || s[i] == 'K') alphabet[10]++;
        if(s[i] == 'l' || s[i] == 'L') alphabet[11]++;
        if(s[i] == 'm' || s[i] == 'M') alphabet[12]++;
        if(s[i] == 'n' || s[i] == 'N') alphabet[13]++;
        if(s[i] == 'o' || s[i] == 'O') alphabet[14]++;
        if(s[i] == 'p' || s[i] == 'P') alphabet[15]++;
        if(s[i] == 'q' || s[i] == 'Q') alphabet[16]++;
        if(s[i] == 'r' || s[i] == 'R') alphabet[17]++;
        if(s[i] == 's' || s[i] == 'S') alphabet[18]++;
        if(s[i] == 't' || s[i] == 'T') alphabet[19]++;
        if(s[i] == 'u' || s[i] == 'U') alphabet[20]++;
        if(s[i] == 'v' || s[i] == 'V') alphabet[21]++;
        if(s[i] == 'w' || s[i] == 'W') alphabet[22]++;
        if(s[i] == 'x' || s[i] == 'X') alphabet[23]++;
        if(s[i] == 'y' || s[i] == 'Y') alphabet[24]++;
        if(s[i] == 'z' || s[i] == 'Z') alphabet[25]++;


    }

    for(i=0; i<26; i++)
    {

        if(i == 0) printf("a: %d\n",alphabet[i]);
        if(i == 1) printf("b: %d\n",alphabet[i]);
        if(i == 2) printf("c: %d\n",alphabet[i]);
        if(i == 3) printf("d: %d\n",alphabet[i]);
        if(i == 4) printf("e: %d\n",alphabet[i]);
        if(i == 5) printf("f: %d\n",alphabet[i]);
        if(i == 6) printf("g: %d\n",alphabet[i]);
        if(i == 7) printf("h: %d\n",alphabet[i]);
        if(i == 8) printf("i: %d\n",alphabet[i]);
        if(i == 9) printf("j: %d\n",alphabet[i]);
        if(i == 10) printf("k: %d\n",alphabet[i]);
        if(i == 11) printf("l: %d\n",alphabet[i]);
        if(i == 12) printf("m: %d\n",alphabet[i]);
        if(i == 13) printf("n: %d\n",alphabet[i]);
        if(i == 14) printf("0: %d\n",alphabet[i]);
        if(i == 15) printf("p: %d\n",alphabet[i]);
        if(i == 16) printf("q: %d\n",alphabet[i]);
        if(i == 17) printf("r: %d\n",alphabet[i]);
        if(i == 18) printf("s: %d\n",alphabet[i]);
        if(i == 19) printf("t: %d\n",alphabet[i]);
        if(i == 20) printf("u: %d\n",alphabet[i]);
        if(i == 21) printf("v: %d\n",alphabet[i]);
        if(i == 22) printf("w: %d\n",alphabet[i]);
        if(i == 23) printf("x: %d\n",alphabet[i]);
        if(i == 24) printf("y: %d\n",alphabet[i]);
        if(i == 25) printf("z: %d\n",alphabet[i]);

    }

    return 0;
}

