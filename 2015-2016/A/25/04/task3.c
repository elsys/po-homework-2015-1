#include <stdio.h>

struct Diagram_struct{
            char letter;
            int occurrence;
    }diagram[26];

void Create_Letter_Distribution_Diagram();
void Sort_Letter_Distribution_Diagram();

int main(){
    int i;

    for(i=0;i<26;i++){
        diagram[i].letter='a'+i;
        diagram[i].occurrence=0;
    }

    Create_Letter_Distribution_Diagram();

    for (i=0;i<26;i++) {
		printf("%c : %d\n",diagram[i].letter,diagram[i].occurrence);
    }

    return 0;
}


void Create_Letter_Distribution_Diagram(){
    char c;

    while(1){
        c=getchar();
        if(c==EOF)
            break;
        else{
            if(c>='A'&&c<='Z')
                c=c+32;
            if(c>='a'&&c<='z')
               diagram[c-'a'].occurrence++;
        }
    }

    Sort_Letter_Distribution_Diagram();

}

void Sort_Letter_Distribution_Diagram(){
    int j,i,temp;
    char tempch;

    for (i=0;i<26;i++){
        for(j=i+1;j<26;j++){

            if(diagram[i].occurrence<diagram[j].occurrence){

                tempch=diagram[i].letter;
                diagram[i].letter=diagram[j].letter;
                diagram[j].letter=tempch;

                temp=diagram[i].occurrence;
                diagram[i].occurrence=diagram[j].occurrence;
                diagram[j].occurrence=temp;

            }
            else
                if(diagram[i].occurrence==diagram[j].occurrence && diagram[i].letter>diagram[j].letter){

                    tempch=diagram[i].letter;
                    diagram[i].letter=diagram[j].letter;
                    diagram[j].letter=tempch;

                    temp=diagram[i].occurrence;
                    diagram[i].occurrence=diagram[j].occurrence;
                    diagram[j].occurrence=temp;

                }
        }
    }
}
