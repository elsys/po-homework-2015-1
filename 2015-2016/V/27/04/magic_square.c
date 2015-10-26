#include<stdio.h>

int main()
{
	int n;
	printf("\n  Enter Size of Square: \n");
	scanf("%d", &n);
	
	int rw,clmn,sqr[n][n],s[n*n+2],i=1,cnt=0,chk,sum,pnt=0,dg,mg=0,o;
	do{
		for(rw=0; rw<n; rw++){
			for(clmn=0; clmn<n; clmn++){
				printf("  Enter Number for Cell %d\n",i);
				scanf("%d", &sqr[rw][clmn]);
				i++;
			}			
		}
		printf("\n  The Square You Entered is: \n");
		for(rw=0; rw<n; rw++){
			printf("\n");
			for(clmn=0; clmn<n; clmn++){
				printf(" \t %d ", sqr[rw][clmn]);
			}
		}
	printf("\n");
	printf("\n  Is This The Square You Wish to Check?\n");
	printf("\n  Enter 1 for \"Yes\" or 0 for \"No\": ");
	scanf("%d", &chk);
		if(chk==1)
			cnt=1;
		else if(chk==0)
			cnt=0;
		i=1;
	}while(cnt==0);

	for(rw=0; rw<n; rw++){
		sum=0;
		for(clmn=0; clmn<n; clmn++){
			sum=sum+sqr[rw][clmn];
		}
		s[pnt]=sum;
		pnt++;
	}
	for(rw=0; rw<n; rw++){
		sum=0;
		for(clmn=0; clmn<n; clmn++){
			sum=sum+sqr[clmn][rw];
		}
		s[pnt]=sum;
		pnt++;
	}
	sum=0;
	for(dg=0; dg<n; dg++){
		sum=sum+sqr[dg][dg];
	}
	s[pnt]=sum;
	pnt++;
	sum=0;
	rw=0;
	clmn=n-1;
	for(dg=0; dg<n; dg++){
		sum=sum+sqr[clmn][rw];
		rw++;
		clmn--;
	}
	s[pnt]=sum;

	for(o=0; o<pnt; o++){
		if(s[o]==s[pnt]){	
			mg=1;
		}
		else {
			mg=0;
			break;
		}	
	}	

	if(mg>0)
		printf("\n  The Square is Magical \n");
	else
		printf("\n  The Square is NOT Magical \n");	
	printf("\n");
	return 0;
}
