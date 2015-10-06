#include <stdio.h>

int main()
{
 int i=0,k=0,j=0,smqna,stop;
 int chislo[1000];
 while(i<=1000)
 {
  printf("\n Vyvedete chislo %d",i);
  scanf("%d",&chislo[i]);
  if(chislo[i]==42)
  {
   break;
  }
  i++;
 }
 while(k<i)
 {
  if(chislo[k]>chislo[k+1])
  {
   chislo[k+1]=smqna;
   chislo[k]=chislo[k+1];
   chislo[k]=smqna;
  }
  k++;
 }
 while(j<k)
 {
  printf("\n %d",chislo[j]);
  j++;
 }
 return 0;
}
