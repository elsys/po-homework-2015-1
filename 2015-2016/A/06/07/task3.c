#include <stdio.h>
 #include <string.h>
 int cases(char s);
 int main()
 {
 	long long int n;
 	long long int r;
 	char h[100];
 	int check = 0;
 	int i=0;
 	scanf("%lli", &n);
 	if(n <= 16){
 		h[0] = n % 16;
 		h[0] = cases(h[0]);
 		printf("%c\n", h[0]);
 		return 0;
        }
 	while(check==0)
 	{

 		r = n;
 		for(i = 0; r != 0; i++)
 		{
 			h[i] = r % 16;
 			r /= 16;
 			h[i] = cases(h[i]);
 		}
 		for(i = 0; i < strlen(h)/2 ; i++)
 		{
 			if(h[i] == h[strlen(h) - i - 1])
 			{
 				check = 1;
 			}
 			else{
 				check = 0;
 				break;
 			}
 		}
 		n++;
 	}

 	printf("%s\n", h);

 	return 0;
 }

 int cases(char s)
 {
 	switch(s){
 		case 0: return 48;
 		case 1: return 49;
 		case 2: return 50;
 		case 3: return 51;
 		case 4: return 52;
 		case 5: return 53;
 		case 6: return 54;
 		case 7: return 55;
 		case 8: return 56;
 		case 9: return 57;
 		case 10: return 65;
 		case 11: return 66;
 		case 12: return 67;
 		case 13: return 68;
 		case 14: return 69;
 		case 15: return 70;
 		default: break;
 	}
 	return 0;
 }
