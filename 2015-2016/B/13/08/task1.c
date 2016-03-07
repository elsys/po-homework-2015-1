#include<stdio.h>
#include<string.h>

long hash(char *);

int main(){

char word[200];

scanf("%s", word);


 long hash_counter;
 hash_counter =  hash(&word[0]);

printf("%ld", hash_counter);


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
