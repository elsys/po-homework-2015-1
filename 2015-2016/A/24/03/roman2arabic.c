#include<stdio.h>
#include<string.h>

int conv(char);

int main()
{
	char rom[7];
	int i;
    int arb=0;
	scanf("%s",rom);

	for(i=0;rom[i]!='\0';i++){

         if(conv(rom[i]) < 0){
             printf("ERROR invalid input number");
             return 0;
         }

         if((strlen(rom-i) > 2)){
             if(conv(rom[i]) < conv(rom[i+2])){
                 printf("ERROR invalid input number");
                 return 0;
             }

         if(conv(rom[i]) >= conv(rom[i+1]))
         }
             arb = arb + conv(rom[i]);
         else{
             arb = arb + (conv(rom[i+1]) - conv(rom[i]));
             i++;
         }
    }
    if(arb>256)
        printf("ERROR input number too large");
    else
        printf("%d",arb);

    return 0;

}



int conv(char s)
{
	int x = 0;
	switch(s) {
		case 'I':x = 1; break;
		case 'V':x = 5; break;
		case 'X':x = 10; break;
		case 'L':x = 50; break;
		case 'C':x = 100; break;
		default: x = 0; break;
	}
	return x;
}
