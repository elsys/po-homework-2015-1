#include <stdio.h>
	int main()
{
        int i[100];
        int a, b, t,d=0;
        int c;
        do
	{
        	printf("kolko chisla?");
       		scanf("%d", &c);
		d=c;
	}while(c>1000 || c<=0);


        for(a=0; a<c; a++) 
	{
		scanf("%d", &i[a]);
		if(i[a]==42)
		{
			d=a+1;
			break;
		}
	}
		

        for(a=0; a<d; ++a)
        for(b=d-1; b>a; --b){
  
                if(i[b-1] > i[b]){
                        t = i[b-1];
                        i[b-1] = i[b];
                        i[b] = t;
                }
        }

        for(t=0; t<d; t++) printf("chislo %d e %d\n",t+1,i[t]);         
        return 0;
}
