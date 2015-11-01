#include<stdio.h>
#include<string.h>
int main()
{
char s[20];
int n=0,l,k;
scanf("%[^\n]s",s);
l=strlen(s);
for(k=0;k<l;k++)
{
if(s[k]=='C') n=n+100;
if(s[k]=='L') n=n+50;
if(s[k]=='X') n=n+10;
if(s[k]=='V') n=n+5;
if(s[k]=='I') {if(s[k+1]=='X') {n=n+9; k++;}}
if(s[k]=='I') {if(s[k+1]=='V') {n=n+4; k++;}}
if(s[k]=='I') {if(s[k+1]=='L') n++;}
if(s[k]=='I') {if(s[k+1]=='C') n++;}
if(s[k]=='I') {if(s[k+1]=='I') n++;}
if(k==l-1 && s[k]=='I') n++;
}
printf("%d",n);
printf("\n");
return 0;
}

