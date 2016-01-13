 #include <stdio.h>


int main(){
int number;
int counter ;
int helper;
int i,box[100];
 do{
scanf("%d" , &number);

 }while(number%2 == 0);
  for(counter = 0;counter < number;counter++){
  scanf("%d", &box[counter]);
  }
  for(counter = 0;counter < number;counter++){

  for(i = 0;i < counter;i++){
  if(box[counter] == box[i]){


  }
  }
  }
for(counter = 0;counter < number;counter++){
helper = 0;
for(i = 0;i < number;i++){
if(box[counter] == box[i]){
helper++;

}
}
if(helper ==1 ){
printf(" \n raindeer rudolf=%d ",  box[counter]); break;
}

}
return 0 ;
}

