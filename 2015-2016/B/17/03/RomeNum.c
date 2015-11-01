#include <stdio.h>
#include <string.h>

int main()
{
char s[100],j;
int arr[100],i,n=0;
scanf("%[^\n]s",s);
j=strlen(s);
for(i=0;i<j;i++)
{
    if(s[i]=='I') arr[i]=1;
    if(s[i]=='V') arr[i]=5;
    if(s[i]=='X')arr[i]= 10;
    if(s[i]=='L')arr[i]=50;
    if(s[i]=='C')arr[i]=100;
}
for(i=0;i<j;i++)
{
    if(i!=j-1){
    if(arr[i]==1&&arr[i+1]>1){
        arr[i]=-1;}
     if(arr[i]==10&&arr[i+1]>10){
            arr[i]=-10;}
    }
    n=n+arr[i];
}
printf("%d",n);
    return 0;
}
