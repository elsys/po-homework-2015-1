#include<stdio.h>
#include<string.h>
#include<stdlib.h>
   int main()
{
	char sentence[160];	
        int counter , length , result = 0;
	 fgets(sentence, 160 , stdin);
	length = strlen(sentence);
	for(counter = 0 ; counter < length ; counter++)
        {
        	if(sentence[counter]==' ')
		result = result+1;
		if(sentence[counter]=='a')
		result = result+1;
		if(sentence[counter]=='b')
		result = result+2;
		if(sentence[counter]=='c')
		result = result+3;
		if(sentence[counter]=='d')
		result = result+1;
		if(sentence[counter]=='e')
		result = result+2;
		if(sentence[counter]=='f')
		result = result+3;
		if(sentence[counter]=='g')
		result = result+1;
		if(sentence[counter]=='h')
		result = result+2;
		if(sentence[counter]=='i')
		result = result+3;
		if(sentence[counter]=='j')
		result = result+1;
		if(sentence[counter]=='k')
		result = result+2;
		if(sentence[counter]=='l')
		result = result+3;
		if(sentence[counter]=='m')
		result = result+1;
		if(sentence[counter]=='n')
		result = result+2;
		if(sentence[counter]=='o')
		result = result+3;
		if(sentence[counter]=='p')
		result = result+1;
		if(sentence[counter]=='q')
		result = result+2;
		if(sentence[counter]=='r')
		result = result+3;
		if(sentence[counter]=='s')
		result = result+4;
		if(sentence[counter]=='t')
		result = result+1;
		if(sentence[counter]=='u')
		result = result+2;
		if(sentence[counter]=='v')
		result = result+3;
		if(sentence[counter]=='w')
		result = result+1;
		if(sentence[counter]=='x')
		result = result+2;
		if(sentence[counter]=='y')
		result = result+3;
		if(sentence[counter]=='z')
		result = result+4;
 	}
        	printf("%d",result);
 	 return 0;
}
