#include <stdio.h>

int numHex[50];
void toHex(int);
int isPalindrome();
void printToHex();
int numLen;

int main() 
{
    int num;
    scanf("%d", &num);
    toHex(num);
    
    if(isPalindrome() == 1)
    {
        printToHex();
    }
    else
    {
        do 
        {
            num++;
            toHex(num);
        }
        while (isPalindrome() == 0);
        printToHex();
    }
    
    return 0;
}

void toHex(int num)
{
    numLen = 0;
    
    while(num != 0)
    {
        numHex[numLen] = num % 16;
        num /= 16;
        numLen++;
    }
}

int isPalindrome()
{
    
    int i;
    for (i = 0; i < numLen / 2; i++) {
        if (numHex[i] != numHex[numLen - i - 1]) {
            return 0;
        }

    }
    
    return 1;

}

void printToHex()
{
    int i;
    for (i = numLen - 1; i >= 0; i--) {
        if (numHex[i] >= 10) {
            printf("%c", 'A' + numHex[i] - 10);
        }
        else
        {
            printf("%d", numHex[i]);
        }

    }

}
