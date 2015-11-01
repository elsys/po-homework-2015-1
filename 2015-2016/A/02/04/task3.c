#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void create_letter_distribution_diagram();
int main()
{
    create_letter_distribution_diagram();
    return 0;
}
void create_letter_distribution_diagram()
{   char s[1000];
    int a[26][2],i,j,n,c,d;

    scanf("%s",s);
    n=strlen(s);
    for(i=0,j='a';i<26;i++)
    {   a[i][1]=j;
        a[i][0]=0;
        j++;
    }
    for(i=0;i<n;i++)
        if(s[i]>='A'&&s[i]<='Z')
                s[i]=s[i]+('a'-'A');
    for(i=0;i<n;i++)
    {   switch(s[i])
        {
          case 'a':
          a[0][0]++;  break;
          case 'b':
          a[1][0]++;  break;
          case 'c':
          a[2][0]++;  break;
          case 'd':
          a[3][0]++;  break;
          case 'e':
          a[4][0]++;  break;
          case 'f':
          a[5][0]++;  break;
          case 'g':
          a[6][0]++;  break;
          case 'h':
          a[7][0]++;  break;
          case 'i':
          a[8][0]++;  break;
          case 'j':
          a[9][0]++;  break;
          case 'k':
          a[10][0]++;  break;
          case 'l':
          a[11][0]++;  break;
          case 'm':
          a[12][0]++;  break;
          case 'n':
          a[13][0]++;  break;
          case 'o':
          a[14][0]++;  break;
          case 'p':
          a[15][0]++;  break;
          case 'q':
          a[16][0]++;  break;
          case 'r':
          a[17][0]++;  break;
          case 's':
          a[18][0]++;  break;
          case 't':
          a[19][0]++;  break;
          case 'u':
          a[20][0]++;  break;
          case 'v':
          a[21][0]++;  break;
          case 'w':
          a[22][0]++;  break;
          case 'x':
          a[23][0]++;  break;
          case 'y':
          a[24][0]++;  break;
          case 'z':
          a[25][0]++;  break;

        }

    }
       for(i=0;i<26;i++)
            for(j=0;j<26;j++)
                if(a[i][0]>a[j][0])
                {
                    c=a[i][0];
                    d=a[i][1];
                    a[i][0]=a[j][0];
                    a[i][1]=a[j][1];
                    a[j][0]=c;
                    a[j][1]=d;
                }
                else
                    if(a[i][1]<a[j][1])
                        {
                            c=a[i][0];
                            d=a[i][1];
                            a[i][0]=a[j][0];
                            a[i][1]=a[j][1];
                            a[j][0]=c;
                            a[j][1]=d;
                        }
        for(i=0;i<26;i++)
        printf("\n%c: %d ",a[i][1],a[i][0]);




}
