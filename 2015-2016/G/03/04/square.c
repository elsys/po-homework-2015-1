 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
  int n[20];
  int check;
  int boss;
  int  choice=0;
  printf("\n n1 n2 n3");
  printf("\n n4 n5 n6");
   printf("\n n7 n8 n9");
   for(i=0;i<9;i++)
   {
       printf("\n enter number %d=",i+1);
       scanf("%d",&n[i]);
   }

   check = n[0]+ n[1]+n[2];
   if(n[3]+n[4]+n[5]==check && n[6]+n[7]+n[8]==check)
   {

    boss = n[2] + n[5] + n[8];
    if(boss == check){
        printf("\ncorrect  magic square ");
    }
    else printf("incorect magic square");
    if(n[1] + n[4] + n[7]== boss && n[0] + n[3] + n[6]== boss)
    {
      printf("\nvalid magic square");

    }
   }
   else{ printf("invalid magic square");}



    return 0;
}

