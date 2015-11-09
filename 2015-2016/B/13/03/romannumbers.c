#include<stdio.h>
#include<string.h>
int main()
{
  char roman[10];
   int l,i,decimal=0;
   scanf("%[^\n]s",roman);
   l=strlen(roman);

  for(i=0;i<l;i++)
   {
     if(roman[i]=='C'){ decimal = decimal+100;
       if(i!=0){if(roman[i-1]=='X')decimal=decimal-20;}}


     if(roman[i]=='L'){decimal = decimal+50;
       if(i!=0){if(roman[i-1]=='X')decimal=decimal-20;}}


     if(roman[i]=='X'){decimal = decimal+10;
        if(i!=0){if(roman[i-1]=='I')decimal=decimal-2;}}


     if(roman[i]=='V'){decimal = decimal+5;
        if(i!=0){if(roman[i-1]=='I')decimal=decimal-2;}}


     if(roman[i]=='I')decimal++;


    }

    printf("%d\n",decimal);

      return 0;

}
