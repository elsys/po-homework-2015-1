 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int mass[20][20];
    int maxs[20][20];
    int i=0;
    int choice=0;
    
    

    for(i=0;i<4;i++)
   {
       for(choice=0;choice<4;choice++){
            printf("\n enter number=");
       scanf("\n%d",&mass[i][choice]);
}
   }
   
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   for(i=0;i<4;i++)
   {
       for(choice=0;choice<4;choice++){
           maxs[choice][i]=mass[i][choice];
}
}


for(i=0;i<4;i++)
{

    for(choice=0;choice<4;choice++)
        printf("%d\t",maxs[i][choice]);
        printf("\n");




}
    return 0;
}

