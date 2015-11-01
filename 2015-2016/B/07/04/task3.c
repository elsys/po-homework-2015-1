#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    int create_letter_distribution_diagram(char* word);
    int main(){
        char word[10000];
        fgets(word, 10000, stdin);
        create_letter_distribution_diagram(word);
        return 0;
    }
    int create_letter_distribution_diagram(char* word){
        int i,p,zero,letter[26];
        char letters[26],zeros;
        
        for(i=0;i<26;i++){
            letter[i] = 0;
        }
        for(i=0;i<26;i++){
            letters[i] = i+97;
        }
        for(i=0;i<strlen(word);i++){
            if(word[i]>=65 && word[i]<=90) letter[word[i]-65]++;
            if(word[i]>=97 && word[i]<=122) letter[word[i]-97]++;
        }
        for(i=0;i<25;i++){
            for(p=0;p<25;p++){
                if(letter[p]<letter[p+1]){
                    zero = letter[p];
                    letter[p] = letter[p+1];
                    letter[p+1] = zero;
                    zeros = letters[p];
                    letters[p] = letters[p+1];
                    letters[p+1] = zeros;
                }
            }
            p=0;
        }
        for(i=0;i<26;i++){
            printf("%c:%d\n",letters[i],letter[i]);
        }
    }
