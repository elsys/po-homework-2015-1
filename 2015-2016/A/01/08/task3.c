#include<stdio.h>

int main()
{
int staq[101];
int sum=2,i,rudi,count=0;
while (sum%2==0){
	scanf("%d",&sum);
	if (0>sum || sum>200){
	sum=2;
	}	
}
for(i=0;i<sum;i++){

	scanf("%d",&staq[i]);
	while (staq[i]>100 || staq[i]<0){
	scanf("%d",&staq[i]);
	}

}

i=0;
count=0;
	while(i<sum){
			while(count<sum ){
					if (count!=i){
					
					if(staq[i]==staq[count]){
					break;}
							}
						count++;
						   }
			
			if(staq[i]==staq[count]){
			i++;
			count=0;			
			}else{rudi=staq[i];break;}
			
			
			}

printf ("%d\n",rudi);


return 0;
}
