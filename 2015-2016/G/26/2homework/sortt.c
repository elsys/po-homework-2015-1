#include <stdio.h>

int main() 
{
 int x,y,z,counter; 
 int n[1000];
for(counter=0; counter<1000 ;counter++) 
 {
printf("Enter a number: ");
scanf("%d", &n[counter]);

if(n[counter] == 42) 
  {
break;
  }
 }

for(x=0; x<counter; x++) 
   {
for(y=counter-1;y>x; y--) 
  {
if(n[y-1] > n[y]) 
 {
z=n[y-1];
n[y-1]=n[y];
n[y]=z;		
 }
  }
   }

for(z = 0;z < counter;z++) 
 {
printf("%d\n", n[z]);
 }

return 0;
}
