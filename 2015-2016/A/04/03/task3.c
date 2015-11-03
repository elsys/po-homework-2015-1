#include <stdio.h>
int main()
{
    int i,temp,j,n[13];
    char a;
    printf("Enter cards: \n");
    for(i=0;i<13;i++)
    {
        scanf("%s",&a);
        if(a>='2'&&a<='9')
            n[i]=a-'0';
        else
            switch(a)
            {
                case 'A': n[i]=14;  break;
                case 'K': n[i]=13;  break;
                case 'Q': n[i]=12;  break;
                case 'J': n[i]=11;  break;
                case 'T': n[i]=10;  break;
            }
    }
    for (i=0;i<13;i++)
    {
        for (j=0;j<13-1-i;j++)
        {
            if(n[j]>n[j+1])
            {
                temp=n[j];
                n[j]=n[j+1];
                n[j+1]=temp;
            }
        }
    }
    for(i=0;i<13;i++)
    {
        if(n[i]>=2&&n[i]<=9)
            printf("%d ",n[i]);
        else
            switch(n[i])
            {
                case 14: printf("A ");  break;
                case 13: printf("K ");  break;
                case 12: printf("Q ");  break;
                case 11: printf("J ");  break;
                case 10: printf("T ");  break;
            }
    }
    return 0;
}
