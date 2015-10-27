#include<stdio.h>

#include<string.h>

int main () {

	char rome[5];
	
	int j,fin = 0;

	int C = 100,L = 50,X = 10,V = 5,I = 1,Null = 0;

	scanf("%s",rome);

	for(j = 0;j < strlen(rome);j++)
		{
			if(rome[j] == 'C')
				{
					if(rome[j-1] != 'I') fin= fin + C; // 100
					else if(rome[j-1] == 'I') fin=fin + (C - I);// 99 
				}
			if(rome[j] == 'L')
				{
					if(rome[j-1] != 'I') fin = fin + L; 
					else if(rome[j-1] == 'I') 
						{if(rome[j-2] != 'I') fin = fin + (L - I); //49 						
						}					
										 
				}
			if(rome[j] == 'X')
				{
					if(rome[j-1] != 'I') fin = fin + X; // 10
					else if(rome[j-1] == 'I') 
						{if(rome[j-2] != 'I') fin = fin + (X - I); // 9
							else if(rome[j-2] == 'I') fin = fin + (X - (I+I)); // 8		
							} 		
				}
			if(rome[j] == 'V')
				{
					if(rome[j-1] != 'I') fin = fin + V; // 5
					else if(rome[j-1] == 'I') fin = fin + (V - I); // 4
				}
			
			if(rome[j] == 'I')
				{
					if(rome[j+1] == Null)
						{
							if(rome[j-1] != 'I') fin = fin + I;//1
						}
				
			
				
					if(rome[j+1] == 'I')
						{
							if(rome[j-1] != 'I')
								if(rome[j+2] == Null) fin = fin + 2*I;//2
						}
				
			
				
					if(rome[j+1] == 'I')
						{
							if(rome[j+2] == 'I')
								if(rome[j+3] == Null) fin = fin + 3*I;//3
						}
				}		
		}
	
	printf("Desetichno = %d\n",fin);
		
	return 0;
}
