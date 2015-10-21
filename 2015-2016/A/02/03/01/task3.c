#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,j;
char c;
    char s[15];
    fgets(s,14,stdin);
    for(i=0;i<13;i++)
    {if(s[i]=='A')
        s[i]='Z';
      if(s[i]=='K')
        s[i]='Y';
      if(s[i]=='Q')
        s[i]='X';
      if(s[i]=='J')
        s[i]='W';
      if(s[i]=='T')
        s[i]='V';
    }

    for(i=0;i<12;i++)
        for(j=i+1;j<13;j++)
            if(s[i]<s[j])
            {c=s[i];
             s[i]=s[j];
             s[j]=c;
            }

    for(i=0;i<13;i++)
    {if(s[i]=='Z')
        s[i]='A';
      if(s[i]=='Y')
        s[i]='K';
      if(s[i]=='X')
        s[i]='Q';
      if(s[i]=='W')
        s[i]='J';
      if(s[i]=='V')
        s[i]='T';
    }


    for(i=0;i<13;i++)
        printf("%c",s[i]);
    return 0;
}
