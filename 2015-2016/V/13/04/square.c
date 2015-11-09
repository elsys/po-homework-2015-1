#include <stdio.h>

int main()
{
	int i, j, a;
	int in[3][3];
	for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&in[i][j]);
	
	i=0;
	if(in[0][0] + in[0][1] + in[0][2] == in[1][0] + in[1][1] + in[1][2] && in[1][0] + in[1][1] + in[1][2] == in[2][0] + in[2][1] + in[2][2]) i++;
	if(in[0][0] + in[1][0] + in[2][0] == in[0][1] + in[1][1] + in[2][1] && in[0][1] + in[1][1] + in[2][1] == in[0][2] + in[1][2] + in[2][2]) i++;
	if(in[0][0] + in[1][1] + in[2][2] == in[2][0] + in[1][1] + in[0][2]) i++;
	if(in[1][0] + in[1][1] + in[1][2] == in[0][1] + in[1][1] + in[2][1] && in[0][1] + in[1][1] + in[2][1] == in[0][0] + in[1][1] + in[2][2]) i++;

	if(i==4) printf("\nThe square is magical\n");
	else printf("\nThe square isn't magical\n");
}
