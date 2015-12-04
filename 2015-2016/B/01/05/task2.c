#include <stdio.h>

void next_generation(int *current , int *next , int length){

  int  count=0,count2=0,help=0;

 while(count2!=1000){
    count=0;
          printf("\n");
    while(count!=length){
       if(current[count]==0) printf(".");
       if(current[count]==1) printf("*");
       count++;
    }

    for(count=0,help=0;count!=length;count++){
    if(current[count]==0) help++;
    }
      if(help==length) break;

    for(count=1;count!=length-1;count++){
            next[0]=0;
            next[length-1]=0;
        if(current[count-1]==current[count+1]) next[count]=0;
        else next[count]=1;
    }

       for(count=0;count!=length;count++){
       current[count]=next[count];
       }
 count2++;
    }
}


int main()
{
    int length, current[20], next[20], count=0;

scanf("%d",&length);
while(length>20 || length<0) scanf("%d",&length);

while(count!=length){
    scanf("%d", &current[count]);
    count++;
}

next_generation(current,next,length);

return 0;
}
