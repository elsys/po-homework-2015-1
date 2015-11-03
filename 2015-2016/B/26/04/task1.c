#include <stdio.h>
#include <stdlib.h>
int is_prime(int num2,int num1);
int main(){
int num2=2,num1,done;
scanf("%d",&num1);
done=is_prime(num2,num1);
printf("\n%d",done);
return 0;
}
int is_prime(int num2,int num1){
    int ans;
    while(1){
    if(num1<1){ans=-1;break;}
    if(num1 == num2){ ans=1; break; }
        else if(num1%num2== 0){ ans=0;  break;}
             else num2++;

}

return ans;
}
