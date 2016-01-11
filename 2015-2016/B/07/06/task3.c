#include <stdio.h>
#include <stdio.h>
int main(){
    int eleni[200],ednakwi[100],i,p,o;
    do scanf("%d",&i); while(i%2 == 0);
    for(p=0;p<i;p++){
        do scanf("%d", &eleni[p]); while(eleni[p] > 100 || ednakwi[eleni[p]] == 1);
        for(o=0;o<p;o++) {
            if(eleni[o] == eleni[p]) {
                ednakwi[eleni[o]] = 1;
                eleni[p] = 0;
                eleni[o] = 0;
            }
        }
    }
    for(p=0;p<i;p++) {
        if(eleni[p] != 0) {
            printf("%d", eleni[p]);
            break;
        }
    }
return 0;
}
