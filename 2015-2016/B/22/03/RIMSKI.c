#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
   	char Swiftrage[20];
	int Kappa=0,l,i;;
	fgets(Swiftrage,20,stdin);
        l = strlen(Swiftrage);


        for(i=0;i<l;i++){
	
		if(Swiftrage[i]=='C') Kappa=Kappa+100;
		if(Swiftrage[i]=='L') Kappa=Kappa+50;
		if(Swiftrage[i]=='X') Kappa=Kappa+10;
    		if(Swiftrage[i]=='V') Kappa=Kappa+5;
		if(Swiftrage[i]=='I'){
			
			if(Swiftrage[i+1]=='X') Kappa= Kappa-1;
			if(Swiftrage[i+1]=='V') Kappa = Kappa -1;
			if(Swiftrage[i+1]=='I'){ Kappa= Kappa+1;
			}else if(Swiftrage[i-1]=='I') Kappa= Kappa+1;
}

   }

printf("%d",Kappa);
printf("\n");
return 0;
}
