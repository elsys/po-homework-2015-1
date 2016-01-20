 #include <stdio.h>
int main(){
int num;
int counter;
int box[1000];
int base;
int i;
int help;

do{
    printf("enter amount=");scanf("%d",&num);
}while(num>1000);

for(counter =0;counter<num;counter++)
{
  scanf("%d",&box[counter]);
  if(box[counter] == 42)
  {
      printf("ERROR\n");
      break;
  }
}

 for(i=0; i<num; i++){
        for(base=num-1; base>i; base--){


                if(box[base-1] > box[base]){
                        help = box[base-1];
                        box[base-1] = box[base];
                        box[base] = help;
                }
        }

 }




for(i=0;i<num;i++)
{
    printf("%d\n",box[i]);
}
return 0;
}

