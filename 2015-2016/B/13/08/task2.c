#include<stdio.h>
#include<string.h>

typedef struct occurance_t{

int times;
long hash_word;

}occurance_t;


long hash(char *);

   int main(){

   int counter = 0;
   char word[200];
   occurance_t array_words[3000];
   
    scanf("%s", word);

   for(;strcmp(word,"vsmisal") != 0; counter++)
      {
       array_words[counter].hash_word = hash(&word[0]);

     array_words[counter].times = 1;
       
       int the_same_hash = 0;
       int second_counter;
       for(second_counter = 0; second_counter < counter; second_counter++)
         {
           
           if(array_words[counter].hash_word == array_words[second_counter].hash_word)
              {
               array_words[second_counter].times++;
               the_same_hash = 1;       
              }
 
           if(the_same_hash == 0 && second_counter == (counter-1) )
              {
               array_words[counter].times = 1;
              }
         }
       
       scanf("%s", word);  
      }

      int help_times = array_words[counter].times; 
      long help_counter = counter; 

     for(; counter > 0 ; counter--)
      {

       if(array_words[counter].times < array_words[counter - 1].times)
           {
            help_times = array_words[counter - 1].times;
            help_counter = counter - 1;
           }      
      }

    printf("%d %ld",help_times,array_words[help_counter].hash_word);
   return 0;
  }



long hash(char *word){

int counter;

int len_word = strlen(word);

long hash_counter = 42;


for(counter = 0; counter < len_word; counter++)
   {
      hash_counter += word[counter] * (counter + 1); 
   }

return hash_counter;

}
