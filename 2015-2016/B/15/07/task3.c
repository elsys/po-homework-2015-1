 #include <stdio.h>
 #include <stdlib.h>
 #define max 500

 int main()
 {
     char hex[max];
     int  front = 0, back = 0 , num , pom , ok = 0;


     scanf("%d",&num);

    do{

         pom = num;

       for (back = 0 ; pom > 0 ; back++)
         {

             hex[back] = pom % 16;

             pom = pom / 16;
         }

         for (front = 0 ; front <= back-1;)
         {
             if (hex[front] == hex[back-1])
             {
                 front ++ ; back -- ;

               if (front >= back -1)
               ok = 1;
             }
             else
             break;
         }
            if (ok == 0)
                num++;

     }while(ok == 0);

      printf("%X",num);

 	return 0;
 }
