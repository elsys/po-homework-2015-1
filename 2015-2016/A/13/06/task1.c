#include <stdio.h>
#include <stdlib.h>

void dec_input(int * num1, int * num2, int * num3);
void hex_input(char num1[], char num2[], char num3[]);
void hex_to_dec();

int main()
{

    char n;
    scanf("%c", &n);
    getchar();
    char num_hex_1[2], num_hex_2[2], num_hex_3[2];
    int num_dec_1=0, num_dec_2=0, num_dec_3=0;

    switch(n)
    {
        case 'h':
            hex_input(num_hex_1, num_hex_2, num_hex_3);
            num_dec_1 = strtol(num_hex_1, NULL, 16);
            num_dec_2 = strtol(num_hex_2, NULL, 16);
            num_dec_3 = strtol(num_hex_3, NULL, 16);
            printf("rgb(%d, %d, %d)", num_dec_1, num_dec_2, num_dec_3);
            break;

       case 'd':
            dec_input(&num_dec_1, &num_dec_2, &num_dec_3);
            printf("#%x%x%x", num_dec_1, num_dec_2, num_dec_3);
            break;
    }
    return 0;
}

void hex_input(char num1[], char num2[], char num3[])
{
    char str[7];
    scanf("%s", str);
    num1[0] = str[1];
    num1[1] = str[2];
    num2[0] = str[3];
    num2[1] = str[4];
    num3[0] = str[5];
    num3[1] = str[6];

}
void dec_input(int * num1, int * num2, int * num3)
{
    char str1[10], str2[10], str3[10];
    int i;
    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);
    for(i = 0;i < 4; i++)
    {
        str1[i]= (str1[i]==',') ? '\0' : str1[i];
        str2[i]= (str2[i]==',') ? '\0' : str2[i];
        str3[i]= (str3[i]==',') ? '\0' : str3[i];
    }
    *num1 = atoi(str1);
    *num2 = atoi(str2);
    *num3 = atoi(str3);
}

