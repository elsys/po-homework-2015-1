#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Velislav Yotov 10a Nomer5
Function create_letter_distribution_diagram
Vuvejda se niz i se izvejdat v nizhodqsht red po kolko vsichkite prisustvashti bukvi spored tehniq broi*/

void create_letter_distribution_diagram(void)
{
    char select,input[10000],letters[27],temp_char;
    int occures[27],n=1,c,i,temp;
    while(n!=27)
    {
        letters[n]=96+n;
        n++;
    }
    fgets(input,10000,stdin);
    c=1;
    i=0;
    n=strlen(input);
    select=input[0];
    if(select!=' ')
    {
        if(select>64 && select<91)
        {
            i=select-64;
            occures[i]++;
        }
        if(select>96 && select<123)
        {
            i=select-96;
            occures[i]++;
        }
    }
    while(c!=n)
    {
        select=input[c];
        if(select!=' ')
        {
            if(select>64 && select<91)
            {
                i=select-64;
                occures[i]++;
            }
            if(select>96 && select<123)
            {
                i=select-96;
                occures[i]++;
            }
        }
        c++;
    }
    for(c=1;c<(27-1);c++)
      {
        for(i=1;i<27-c-1;i++)
        {
          if(occures[i]<occures[i+1])
          {
            temp=occures[i];
            occures[i]=occures[i+1];
            occures[i+1]=temp;
            temp_char=letters[i];
            letters[i]=letters[i+1];
            letters[i+1]=temp_char;
          }
          if (occures[i]==occures[i+1])
          {
              if(letters[i]>letters[i+1])
              {
                temp=occures[i];
                occures[i]=occures[i+1];
                occures[i+1]=temp;
                temp_char=letters[i];
                letters[i]=letters[i+1];
                letters[i+1]=temp_char;
              }
          }
        }
      }
    n = 27;
    for (c=1;c<n;c++)
    {
        printf("\n%c: ",letters[c]);
        printf("%d",occures[c]);
    }
}
int main(void)
{
    create_letter_distribution_diagram();
}
