#include <stdio.h>
#include <stdlib.h>

int main()
{   int i;
    int a[7];
    char c,s[7];
    scanf("%c",&c);
    if(c=='h')
        {   scanf("%s",s);
            for(i=1;i<7;i++)
                switch(s[i])
                {   case '0' :
                        a[i]=0; break;
                    case '1' :
                        a[i]=1; break;
                    case '2' :
                        a[i]=2; break;
                    case '3' :
                        a[i]=3; break;
                    case '4' :
                        a[i]=4; break;
                    case '5' :
                        a[i]=5; break;
                    case '6' :
                        a[i]=6; break;
                    case '7' :
                        a[i]=7; break;
                    case '8' :
                        a[i]=8; break;
                    case '9' :
                        a[i]=9; break;
                    case 'a' :
                        a[i]=10; break;
                    case 'b' :
                        a[i]=11; break;
                    case 'c' :
                        a[i]=12; break;
                    case 'd' :
                        a[i]=13; break;
                    case 'e' :
                        a[i]=14; break;
                    case 'f' :
                        a[i]=15; break;

                }
            for(i=1;i<7;i=i+2)
                    a[i]=a[i]*16+a[i+1];



                printf("rgb(%d, %d, %d)",a[1],a[3],a[5]);
        }
    if(c=='d')
        {
            scanf("%d, %d, %d",&a[1],&a[3],&a[5]);
            s[0]='#';
            for(i=1;i<7;i=i+2)
                {
                    a[i+1]=a[i]%16;
                    a[i]=a[i]/16;
                }
            for(i=1;i<7;i++)
                {
                    switch(a[i])
                    {

                        case 10 :
                            s[i]='a'; break;
                        case 11 :
                            s[i]='b'; break;
                        case 12 :
                            s[i]='c'; break;
                        case 13 :
                            s[i]='d'; break;
                        case 14 :
                            s[i]='e'; break;
                        case 15 :
                            s[i]='f'; break;
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

                }


                for(i=0;i<7;i++)
                    printf("%c",s[i]);

        }



    return 0;
}
