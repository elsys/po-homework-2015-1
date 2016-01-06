#include<stdio.h>
#include<string.h>
int function(char codex)
{
	if(codex>='A' && codex<='F')
		return (codex-'A')+10;
	else if(codex>='a' &&  codex<='f')
		return (codex-'a')+10;
	else if(codex>='0' && codex<='9')
		return codex-'0';
	return 0;
}
int function_3(int code)
{
if(code>=0 && code<=9)
	return code+'0';
else if(code>=10 && code<=15)
	return (code+'a')-10;
 
	return 0;
}
void function_2(int number)
{
printf("%c",function_3(number/16));
printf("%c",function_3(number%16)); 

}

int main()
{
	int i=0,R=0,G=0,B=0;
	char type[1];
	char code[7];
	scanf("%c",type);
	if(type[0]=='h')
		{
			scanf("%s",code);
			if(code[i=='#'])
				i++;		
			R=(R*16)+function(code[i]);
			i++;
			R=(R*16)+function(code[i]);		
			i++;		
			G=(G*16)+function(code[i]);
			i++;
			G=(G*16)+function(code[i]);
			i++;
			B=(B*16)+function(code[i]);
			i++;
			B=(B*16)+function(code[i]);
			i++;
			printf("rgb(%d,%d,%d)",R,G,B);
		}

else if(type[0]=='d')
     {
	scanf("%d,%d,%d",&R,&G,&B);
	printf("#");	
	function_2(R);
	function_2(G);
	function_2(B);
     }
else 
	{
	printf("Wrong Input");
	return 0;
	}
}
