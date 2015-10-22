int main()
{
   int i, chislo, broi[10];


   for (i = 0; i < 10; i++)
   {
     broi[i] = 0;
   }


   printf("Vuvedete chislo: ");
   scanf("%d", &chislo);


   while (chislo != 0)
   {
     broi[chislo % 10]++;
      chislo /= 10;
   }


   printf("Povtoreni:\n ");
   for (i = 0; i < 10; i++)
   {
      if (broi[i] > 1)
      {
         printf("chisloto %d se povtarq %d puti \n",i, broi[i]);
      }
   }

   return 0;
}
