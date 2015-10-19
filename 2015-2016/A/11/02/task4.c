#include <stdio.h>

int main() 
{
  int n,z,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
  printf("Vuvedi chislo: ");
  scanf("%d",&n);
  while(n>0)
  {
      z = n%10;
      if(z == 0) a++;
      if(z == 1) b++;
      if(z == 2) c++;
      if(z == 3) d++;
      if(z == 4) e++;
      if(z == 5) f++;
      if(z == 6) g++;
      if(z == 7) h++;
      if(z == 8) i++;
      if(z == 9) j++;
      n = n/10;
  }
  printf("Cifri v chisloto: \n");
  if(a>0) printf("0: %d \n",a);
  if(b>0) printf("1: %d \n",b);
  if(c>0) printf("2: %d \n",c);
  if(d>0) printf("3: %d \n",d);
  if(e>0) printf("4: %d \n",e);
  if(f>0) printf("5: %d \n",f);
  if(g>0) printf("6: %d \n",g);
  if(h>0) printf("7: %d \n",h);
  if(i>0) printf("8: %d \n",i);
  if(j>0) printf("9: %d \n",j);

  return 0;
}
//Знам, че е хамалско, но миналата година не бях много на "ти" с масивите.