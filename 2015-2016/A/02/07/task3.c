#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,l,a,m[20];
    char s[20];
    scanf("%d",&n);
    k=n;
    while(1>0)
    {l=k;
    for(j=0;l>0;j++)
        l=l/16;
    l=k;
    for(i=j;i>0;i--)
    {m[i-1]=l%16;
     l=l/16;
    }

    a=j;
    for(i=0;i<a;a--,i++)
       if(m[i]!=m[a-1])
            break;
      if(i>=a)
      {

          for(i=0;i<j;i++)
            switch(m[i])
                    {

                        case 10 :
                            s[i]='A'; break;
                        case 11 :
                            s[i]='B'; break;
                        case 12 :
                            s[i]='C'; break;
                        case 13 :
                            s[i]='D'; break;
                        case 14 :
                            s[i]='E'; break;
                        case 15 :
                            s[i]='F'; break;
                        case 9 :
                            s[i]='9'; break;
                        case 8 :
                            s[i]='8'; break;
                        case 7 :
                            s[i]='7'; break;
                        case 6 :
                            s[i]='6'; break;
                        case 5 :
                            s[i]='5'; break;
                        case 4 :
                            s[i]='4'; break;
                        case 3 :
                            s[i]='3'; break;
                        case 2 :
                            s[i]='2'; break;
                        case 1 :
                            s[i]='1'; break;
                        case 0 :
                            s[i]='0'; break;
                    }
            for(i=0;i<j;i++)
                printf("%c",s[i]);
        break;
      }
    k++;
    }

    return 0;
}
