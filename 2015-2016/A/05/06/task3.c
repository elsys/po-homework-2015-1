#include<stdio.h>

int main()
{
int eleni[200];
int  counter,number,temp,counter2;
scanf("%d",&number);
while(number%2==0)
scanf("%d",&number);
for(counter=0;counter<number;counter++)
	{
	scanf("%d",&eleni[counter]);
	temp=0;
	for(counter2=0;counter2<counter;counter2++)
		{
			if(eleni[counter2]==eleni[counter])
				temp++;
		}	
	if(temp>1)
	counter--;
	}

for(counter=0;counter<number;counter++)
{	temp=0;
	for(counter2=0;counter2<number;counter2++){
		if(eleni[counter2]==eleni[counter])
			temp++;}
	if(temp==1)
		printf("%d",counter);
	
}
}
