#include <stdio.h>
#include <string.h>

int check1(char c1);

int main()
{
    char orig[]={'2','3','4','5','6','7','8','9','T','J','Q','K','A'};
    char m[14];
    int i,k,n,j,le,flag;
    char c,c1,swap;
    k=0;
    do{
        flag=1;
        scanf("%s",m);
        n=0;
        i=0;

//PROVERKA pravilni simvoli
        while(n==0 && i<13)
        {
            n=check1(m[i]);
            i++;
        };
        if(n==1)
        {
            printf("\nGreshen masiv");
            flag=1;
        }
        else flag=0;

//PROVERKA broi na simvoli
        le=strlen(m);
        if(le!=13)
        {
            printf("\nGreshen masiv");
            flag=1;
        }

//PROVERKA povtarqne na simvol
        for(i=0;i<13;i++)
        {
            n=0;
            for(j=0;j<13;j++)
            {
                if(m[j] == orig[i])
                {
                    n++;
                }
            }
            if(n>1)
            {
                flag=1;
                printf("\nGreshen masiv");
            }
        }
        k++;
    }while(flag==1 && k<100);


    for(i=0; i<13; i++)
    {
        c=orig[i];
        k=0;
        do{
            c1=m[k];
            k++;
        }while(c1!=c && k<13);

        k--;
        swap=m[i];
        m[i]=c1;
        m[k]=swap;
        k=k;
        m[13]='\0';
    }
    printf("\n%s", m);
    return 0;
}

int check1(char c1)
{
    int j,k;
    char orig[]={'2','3','4','5','6','7','8','9','T','J','Q','K','A'};
    k=1;
    for(j=0; j<13; j++)
    {
        if(c1==orig[j])
        {
            k=0;
        }
    }
    return k;
}
