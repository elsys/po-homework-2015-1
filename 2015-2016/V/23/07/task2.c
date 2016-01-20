#include <stdio.h>

void next_generation(int*, int*, int);

int checkAlive(int* current, int length) {
    for(int i = 0; i < length-1; i++)
        if(*(current+i) != 0)
            return 1;
    return 0;
}

int main(){

    int n;
    scanf("%d", &n);
    int current[n],next[n];
    retry:
    for(int i = 0;i < n;i++)
        scanf("%d", &current[i]);
    if(current[0] != 0 || current[n-1] != 0)
        goto retry;
    int proverka;
    for(int j = 0;j < 1000;j++){
        proverka = 0;    
            for(int i = 0;i < n;i++)
                printf("%c", (current[i] == 0) ? '.' : '*');
            printf(" \n");
        proverka = checkAlive(current, n);

        next_generation(current, next,n);
	next[0] = next[n-1] = 0;

	for(int i = 0; i < n ; i++)
		current[i] = next[i];

        if(proverka != 1)                      
                break;
        }

}
void next_generation(int* current, int* next, int length) {    
    for(int i = 1;i < length - 1; i++) {
            if(current[0])
                next[0] = 0;
            if(current[length-1])
                next[length-1] = 0;
            if(((current[i-1] != 0 ) || (current[i+1] != 0)) && (current[i-1] != current[i+1])) {
                *(next+i) = 1;
                continue;
            }
            else next[i] = 0;
    }
    
}
