 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
  int n[20] [20];
  int check;
  int boss=0;
  int  choice=0;
  int rows;
  int box=0;
  int box2=0;
  int base=0;
int b=0;
int k=0;


  printf("enter number of rows=");scanf("%d",&rows);
   for(i=0;i<rows;i++)
   {

       for(choice=0;choice<rows;choice++){
            printf("\n enter number %d=",i);
       scanf("\t%d",&n[i][choice]);
}

   }
   for (i = 0; i < rows; i++) {
      printf("\n");
      for (choice = 0; choice < rows; choice++) {
         printf("   %d", n[i][choice]);
      }
   }

     for (choice = 0; choice < rows-2; choice++){
      for (b = 0; b< rows-2; b++){
            boss = boss + n[b][choice];
      }
      }
for (b = 2; b< rows;b++) {
      for (choice = 2; choice< rows; choice++) {
            box = box + n[b][choice];
      }
      }
      if(box==boss)
      {
          base=2;
      }    else{base=1;}




      if(base==2){
        printf("\nvalid");
      }
      else printf("\n Invalid square");



    return 0;
}

