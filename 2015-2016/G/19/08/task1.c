#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int convertToDecimal(char[]);
void printToHex(int, int);
int powNum(int, int);
int main() 
{
    char oper;
    scanf("%c", &oper);
    getchar();
    if (oper == 'h') {
        char line[7];
        scanf("%s", line);
        printf("rgb(");
        int i;
        for (i = 1; i < 7; i += 2) {
            char strNum[3] = {line[i], line[i+1], '\0'};
            int num = convertToDecimal(strNum);
            if(i == 5)
            {
                printf("%d", num);
            }
            else
            {
                printf("%d, ", num);
            }    
        }
        
        printf(")");
    }
    else
    {
        char l[100];
        int nums[3];
        int i;
        int n = 0;
        int index = 0;
        scanf("%[^\n]%*c", l);
        for (i = 0; i <= strlen(l); i++) 
        {
            if(i != strlen(l)){
                if(l[i] >= '1' && l[i] <= '9' )
                {
                    n *= 10;
                    n += 1 + (l[i] - '1');
                } 
                else if(l[i] == ',')
                {
                    nums[index] = n;
                    n = 0;
                    index++;
                }
            }
            else
            {
                nums[index] = n;
            }
        }
            

        printf("#"); 
        printToHex(nums[0], 1);
        printToHex(nums[1], 1); 
        printToHex(nums[2], 1);
    }

    return 0;
    
}

int convertToDecimal(char* n)
{
    int l = strlen(n);
    int i, r = 0;
    int c = 0;
    for (i = l - 1; i >= 0; i--, c++) 
    {
        int num;
        
        if (n[i] >= 'a' && n[i] <= 'f') 
        {
            num = 10 + (n[i] - 'a');
        }
        else
        {
            num = 1 + (n[i] - '1');
        }
        
        r += num * powNum(16, c);

    }

    return r;
}
void printToHex(int n, int step)
{
    if(step == 1 && n == 0)
    {
        printf("00");
    }else if(n <= 15 && step == 1)
    {
        printf("0");
    }else if(n == 0)
    {
        return;
    }
    
    int rem = n % 16;
    printToHex(n / 16, step + 1);
    
    if (rem >= 10) 
    {
        printf("%c", (char)('a' + (rem - 10)));
    } 
    else if(n != 0) 
    {
         printf("%d", rem);
    }

}

int powNum(int x, int y)
{
    if (y == 0) 
    {
        return 1;
    }
    else
    {
        return x *  powNum(x, y - 1);
    }

}
