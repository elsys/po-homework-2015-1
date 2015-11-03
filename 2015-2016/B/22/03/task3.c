#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char Keepo[13];
	int Kappa[13],l,p,o,min,a,b;
			
	fgets(Keepo,13,stdin);
	l=strlen(Keepo);

	for (o=0;o<l;o++){
		if(Keepo[o]== '2') Kappa[o]=1;
		if(Keepo[o]== '3') Kappa[o]=2;
		if(Keepo[o]== '4') Kappa[o]=3;
		if(Keepo[o]== '5') Kappa[o]=4;
		if(Keepo[o]== '6') Kappa[o]=5;
		if(Keepo[o]== '7') Kappa[o]=6;
		if(Keepo[o]== '8') Kappa[o]=7;
		if(Keepo[o]== '9') Kappa[o]=8;
		if(Keepo[o]== 'T') Kappa[o]=9;
		if(Keepo[o]== 'J') Kappa[o]=10;
		if(Keepo[o]== 'Q') Kappa[o]=11;
		if(Keepo[o]== 'K') Kappa[o]=12;
		if(Keepo[o]== 'A') Kappa[o]=13;
		}



	for(a=0;a<=l;a++)
  {
   min=a;
   for(p=a+1;p<=l;p++)
    
             if(Kappa[min]>Kappa[p])
                   min=p;

                 b=Kappa[min];
                 Kappa[min]=Kappa[a];
                 Kappa[a]=b;
       
  }

	for (o=0;o<l;o++){
		if(Kappa[o]== 1) Keepo[o]= '2';
		if(Kappa[o]== 2) Keepo[o]= '3';
		if(Kappa[o]== 3) Keepo[o]= '4';
		if(Kappa[o]== 4) Keepo[o]= '5';
		if(Kappa[o]== 5) Keepo[o]= '6';
		if(Kappa[o]== 6) Keepo[o]= '7';
		if(Kappa[o]== 7) Keepo[o]= '8';
		if(Kappa[o]== 8) Keepo[o]= '9';
		if(Kappa[o]== 9) Keepo[o]= 'T';
		if(Kappa[o]== 10) Keepo[o]= 'J';
		if(Kappa[o]== 11) Keepo[o]= 'Q';
		if(Kappa[o]== 12) Keepo[o]= 'K';
		if(Kappa[o]== 13) Keepo[o]= 'A';
		}

 
printf("%s",Keepo);

 return 0;
}
