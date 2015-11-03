#include <stdio.h>

int main()
{
    char ch[400];
    scanf("%400s",ch);

    int i,k=0;;

    for (i=0;ch[i]!='\0';i++)
    {
        if(ch[i]<='9' && ch[i]>='0')k++;
    }
    if(i!=k) exit(2);

    for (i=0;ch[i]!='\0';i++)
    {

        if(ch[i]<='9' && ch[i]>='0'){

        int l=1;
        for(k=i+1;ch[k]!='\0';k++)
        {
            if(ch[k]==ch[i]){l++;ch[k]='J';}
        }
        printf("\t%c se sre6a %i\n",ch[i],l);

        ch[i]='J';
        }
    }



    return 0;

}
