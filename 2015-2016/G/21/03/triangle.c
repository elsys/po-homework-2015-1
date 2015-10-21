#include <stdio.h>
void newString();

int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    for(i=0;i<n;i++)
    {
        char first[100];
        newString(first,n-1-i,' ');
        char second[100];
        newString(second,i*2+1,'*');
        printf("%s%s%s\n",first,second,first);
    }
}

void newString(char string[],int count,int symbol)
{
    int i;
    for(i=0;i<count;i++)
    {
        string[i] = symbol;
    }
    string[i] = '\0';
}
