include <stdio.h>
#include <string.h>

int main()
{
    int i,j,min,n;
    char s[13],x;

  scanf("%[^\n]s",s);
  n=strlen(s);
  for(i=0;i<n;i++)
  {
      if(s[i]=='T')
        {
            s[i]=58;
        }
      if(s[i]=='J')
        {
            s[i]=59;
        }
      if(s[i]=='Q')
        {
            s[i]=60;
        }
      if(s[i]=='K')
        {
            s[i]=61;
        }
      if(s[i]=='A')
        {
            s[i]=62;
        }

  }
    for(i = 0; i < n; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(s[j] < s[min])
                min = j;

        }

        if(i != min)
        {
            char x = s[i];
            s[i] = s[min];
            s[min] = x;
        }
    }
        for(i=0;i<n;i++)
        {
            if(s[i]==58)
                s[i]='T';
            if(s[i]==59)
                s[i]='J';
            if(s[i]==60)
                s[i]='Q';
            if(s[i]==61)
                s[i]='K';
            if(s[i]==62)
                s[i]='A';

        }
        printf("%s",s);
    return 0;
}
