 #include <stdio.h>

int main(){
int n ;
int help2;
int i=0;
int counter=0;
int belt ;
int box[200];
int ptr[200];
int saw =0 ;

printf("enter number = ");scanf("%d",&n);

while(n!=0)
{
box[i] = n%10;
n = n/10;
 i++;
}
help2 = i;
for(belt=0;belt<help2;belt++)
{

        if(box[belt]==box[belt+1]){

            ptr[counter]=box[belt+1];
            counter++;
        }
        

}
for(saw=0;saw<counter;saw++){

    printf("%d\n",ptr[saw]);
}
return 0;
}


