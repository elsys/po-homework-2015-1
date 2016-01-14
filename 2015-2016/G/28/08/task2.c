#include<stdio.h>

int main()
{
	char str[160];
	int counter = 0,counter2 = 0;
	scanf("%[^\n]s", str);
	while(str[counter] != '\0')
	{
		switch(str[counter]){
			case 'a':
				counter2+=1;		
				break;
			case 'b':
				counter2+=2;
				break;
			case 'c':
				counter2+=3;
				break;
			case 'd':
				counter2+=1;		
				break;
			case 'e':
				counter2+=2;
				break;
			case 'f':
				counter2+=3;
				break;
			case 'g':
				counter2+=1;		
				break;
			case 'h':
				counter2+=2;
				break;
			case 'i':
				counter2+=3;
				break;
			case 'j':
				counter2+=1;		
				break;
			case 'k':
				counter2+=2;
				break;
			case 'l':
				counter2+=3;
				break;
			case 'm':
				counter2+=1;		
				break;
			case 'n':
				counter2+=2;
				break;
			case 'o':
				counter2+=3;
				break;
			case 'p':
				counter2+=1;		
				break;
			case 'q':
				counter2+=2;
				break;
			case 'r':
				counter2+=3;
				break;
			case 's':
				counter2+=4;		
				break;
			case 't':
				counter2+=1;
				break;
			case 'u':
				counter2+=2;
				break;
			case 'v':
				counter2+=3;		
				break;
			case 'w':
				counter2+=1;
				break;
			case 'x':
				counter2+=2;
				break;
			case 'y':
				counter2+=3;		
				break;
			case 'z':
				counter2+=4;
				break;
			case ' ':
				counter2+=1;
				break;
		}
				
		counter++;
	}
    printf("%d", counter2);
	return 0;
}
