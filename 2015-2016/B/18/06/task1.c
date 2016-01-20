#include <stdio.h>
#include <stdlib.h>

int convert_to_hex();
void convert_to_dec();

int main()
{
   char input= '\0';
   
   scanf("%c", &input);

   if (input == 'h')
   {
      char hex_input[100];
   
      scanf("%s", hex_input);
      
      convert_to_dec(&hex_input);
   }
   
   else if (input == 'd')
   {
      scanf("%c", &input);
      char input[100];
      
      int a = 0;
      int b = 0;
      int c = 0;
      
      scanf("%[^\n]s", input);
      
      sscanf(input, "%d, %d, %d", &a, &b, &c);
      
      printf("#%x\n", convert_to_hex(a, b, c));
   }
   
   
   return 0;
}


void convert_to_dec(char *hex)
{   
   unsigned int dec_num = 0;
   
   int red = 0;
   int green = 0;
   int blue = 0;
   
   hex = hex + 1;
   
   sscanf(hex, "%x", &dec_num); 
   
   red = (dec_num >> 16) & 0xFF;
   green = (dec_num >> 8) & 0xFF;
   blue = dec_num & 0xFF;
   
   printf("rgb(%d, %d, %d)\n", red, green, blue);
   
   return;
}

int convert_to_hex(int r, int g, int b)
{
   
   long mask = (r << 16) + (g << 8) + (b & 0xFF);
    
   return mask;
}
