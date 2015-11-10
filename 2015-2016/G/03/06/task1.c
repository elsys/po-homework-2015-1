 #include <stdio.h>

int is_prime(int result);

int main(){

int rex;

  printf("%d",is_prime(rex));
}
int is_prime(int result)
{

int num;
int code=0;
int i;
scanf("%d",&num);



for(i=2;i<num;i++)
{
  if(num%i==0){

      code = 1;
   }
}
if(code == 0){
    result = 1;
}
else
    result = 0;
    if(num<3){

        result=-1;
    }

return result;

}

