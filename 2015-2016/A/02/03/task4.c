#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[10];
    int a[10];
    int i,j=0,n,b=0;

    fgets(s,11,stdin);
    n=strlen(s);
    for(i=0;i<10;i++)
        a[i]=0;

    for(i=0;i<n;i++)
    {   if(s[i]=='C')
        a[i]=100;
        if(s[i]=='L')
        a[i]=50;
        if(s[i]=='X')
        a[i]=10;
        if(s[i]=='V')
        a[i]=5;
        if(s[i]=='I')
        a[i]=1;
    }
    for(i=0;i<n-4;i++)
       if(a[i]==a[i+1] && a[i+1]==a[i+2] && a[i+2]==a[i+3])
            return 0;

    for(i=0;i<n-2;i++)
        if(a[i]==5 || a[i]==50)
            if(a[i]==a[i+1])
                return 0;


    for(i=0;i<n-2;i++)
        if(a[i]>=a[i+1])
            b=b+a[i];
        else
        {   if(a[i]<a[i+2])
                return 0;

            if(a[i]==5 || a[i]==50)
                return 0;

            for(j=i+1;j<i+1;j++)
                if(a[j]==a[i])
                    return 0;
            b=b-a[i];
        }

    b=b+a[n-2];
    if(b>256)
        return 0;

    printf("%d",b);

    return 0;
}
