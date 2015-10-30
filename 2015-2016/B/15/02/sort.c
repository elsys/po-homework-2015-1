#include <stdio.h>
int main()
{
int j,i,pom,n=0;
int s[1000];
for(i=0;i<1000;i++)
{
    scanf("%d",&s[i]);
    if(s[i]==42)
        break;
    n++;
}
for(i=0;i<n-1;i++)
  {
	for(j=0;j<n-1;j++)
	   if(s[j]>s[j+1])
            {
                pom=s[j];
                s[j]=s[j+1];
                s[j+1]=pom;
		    }
  }
     for(i=0;i<n;i++)
    printf("\n%d",s[i]);
    return 0;
}
