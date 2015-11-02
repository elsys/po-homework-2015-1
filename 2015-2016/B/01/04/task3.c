#include <stdio.h>


int create_letter_distribution_diagram (char txt[100]){

int counter=0,lenght,word[26],help;
char let[26];

while(counter<=25){
    word[counter]=0;
   let[counter]='a' + counter;
    counter++;
}
counter=0;

lenght=strlen(txt);

     while(counter!=lenght)
    {
        if(txt[counter] >= 'a' && txt[counter] <= 'z') word[txt[counter]-'a']++;
        if(txt[counter] >= 'A' && txt[counter] <= 'Z') word[txt[counter]-'A']++;
        counter++;
    }
    counter=0;

lenght=25;
    while(lenght!=0){
        while(counter!=25){
          if(word[counter]<word[counter+1]){
               help=word[counter];
               word[counter]=word[counter+1];
               word[counter+1]=help;
               help=let[counter];
               let[counter]=let[counter+1];
               let[counter+1]=help;
                        }
                counter++;
                     }
    counter=0;
    lenght--;
    }

    while(counter<=25){
    printf("\n%c - %d",let[counter],word[counter]);
    counter++;}

}

int main(){

char txt[100];

scanf("%[^\n]s",txt);

create_letter_distribution_diagram(txt);

    return 0;
}
