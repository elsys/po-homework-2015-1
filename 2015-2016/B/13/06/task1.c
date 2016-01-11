#include<stdio.h>

int main (){
  
  char input; 
  scanf("%c", &input);
 
  if (input == 'h') 
   {
     char help;
     scanf("%c", &help);

     char input_string[15];

     scanf("%[^\n]s", input_string);  
  
     int red = 0, green = 0, blue = 0;     

     if(input_string[2] > 96 && input_string[2] < 123) red = input_string[2] - 87;      
     else red = input_string[2] - 48;
     if(input_string[1] > 96 && input_string[1] < 123) red = red + (input_string[1] - 87) * 16;
     else red = red + (input_string[1] - 48) * 16;
      
     if(input_string[4] > 96 && input_string[4] < 123) green = input_string[4] - 87;
     else green = input_string[4] - 48;
     if(input_string[3] > 96 && input_string[3] < 123) green = green + (input_string[3] - 87) * 16;
     else green = green + (input_string[3] - 48) * 16;

     if(input_string[6] > 96 && input_string[6] < 123) blue = input_string[6] - 87;
     else blue = input_string[6] - 48;
     if(input_string[5] > 96 && input_string[5] < 123) blue = blue + (input_string[5] - 87) * 16;
     else blue = blue + (input_string[5] - 48) * 16;
     
     printf("rgb(%d,%d,%d)", red, green, blue);  
          
   }



  if (input == 'd')
   {
      char comma;
      int numbers[5]; 
       for(int counter = 0; counter < 3; counter++)
        {
          scanf("%d", &numbers[counter]);
          scanf("%c", &comma);
        }

      if(numbers[0] == 0) printf("#%x%x", numbers[0], numbers[0]);
      else printf("#%x", numbers[0]);
      
      if(numbers[1] == 0) printf("%x%x", numbers[1], numbers[1]);
      else printf("%x", numbers[1]);
      
      if(numbers[2] == 0) printf("%x%x", numbers[2], numbers[2]);
      else printf("%x", numbers[2]);
   }
}
