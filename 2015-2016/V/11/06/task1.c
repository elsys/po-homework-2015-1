#include <stdio.h>
int is_prime(int);
int main()
{
    int chislo;
    scanf("%d",&chislo);
    printf("%d",is_prime(chislo));
    return 0;
}
int is_prime(int chislo){
    if(chislo<1){
		return -1;
	}
    int i=2;
    while(i<chislo){
        if(chislo%i==0){
            if(chislo==2){
                return 1;
			}
			else{
                return 0;
            }
        }
        i++;
    }
    return 1;
}
