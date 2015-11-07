#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Velislav Yotov 10a Nomer-5
task1-is_prime function
Proverqva dali chisloto e prosto.Ako e prosto:1 ako ne:0 ako ima greshka:-1*/
int str_into_int(char* string)
{
int  i, len;
int result=0;
len = strlen(string);
for(i=0; i<len; i++)
    {
        result=result*10+(string[i]-'0');
    }
is_prime(result);
}
int is_prime(result)
{
    int counter,l=0,number;
    number=result;
    for(counter=1;counter<=number;counter++)
        {
            if(number%counter==0)
                {
                    l++;
                }
        }
  if (l==2)
      printf("1");
  else
      printf("0");
    return 0;
}

int main()
{   int lenght,i,m=0;
    char string[10];
    scanf("%s",string);
    lenght=strlen(string);
    for(i=0;i<lenght;i++)
        {
            if(string[i]>='0' && string[i]<='9')
                m++;
        }
    if(m==lenght)
        str_into_int(string);
    else{
        printf("-1");
    }
    return 0;
}


