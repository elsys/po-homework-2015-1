#include <stdio.h>

int main(){
  
  int Y,a=0,p[100],L[100],i=0,j ;

    printf("wywedi 4islo   ");
    scanf("%d",&Y);

  for(i=0;i<100;i++)
{
  L[i]=0;
}

  while(Y>0)
  {
    p[a]=Y%10;
     Y=Y/10;

      
      a++;
  
  } 
j=a; 
a=0;
while (j>0)
{
switch(p[a])
{
  case 0 : L[0]++;break; 
  case 1 : L[1]++;break;
  case 2 : L[2]++;break;
  case 3 : L[3]++;break;
  case 4 : L[4]++;break;
  case 5 : L[5]++;break;
  case 6 : L[6]++;break;
  case 7 : L[7]++;break;
  case 8 : L[8]++;break;
  case 9 : L[9]++;break;
}
a++;
j--;
}
i=0;
while(i<=9)
{
   printf("\nbroq na %d------>",i+1); printf("%d",L[i]);
   i++;

}


return 0;
}
