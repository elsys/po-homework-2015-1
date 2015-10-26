#include <stdio.h>
int main(){
char c[10];
int x,y,i;
for(x=0;x<10;x++);
c[x]=0;
printf("Enter Number: ");
scanf("%d", &x);
while(x>0){
    y=x%10;
    for(i=0;i<10;i++){
        if(y==i)c[i]++;
        }
    x=x/10;
    }
    for(y=0;y<10;y++)
        printf("%d - %d", x, c[y]);
return 0;
}
