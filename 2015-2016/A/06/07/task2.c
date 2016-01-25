#include <stdio.h>
int main(){
int n;
short int v;
short int p;
int flag[8];
int r;
int a=0;
scanf("%d", &n);
scanf("%hi", &v);
scanf("%hi", &p);
if(p < 0 || p > 7)
    {
    return 0;
}
 	if(v < 0 || v > 1)
        {
 		return 0;
 	}

 	for(a=0; a<p; a=a+1)
 	{
 		 r = n;
 		 n = n >> 1;
 		 if(r % n == 1)
            {
 			 flag[a] = 1;
 		 }
 		 else{
 			 flag[a] = 0;
 		 }
 	}
 	if(v == 1)
        {
 		n = n | v;
 	}
 	else
 	{
 		n = n & v;
 	}
 	for(a=p - 1; a>=0; a=a-1)
        {
 		 n = n << 1;
 		 if(flag[a] == 1)
 		 {
 			 n++;
 		 }
 	}
 	printf("%d\n", n);
 	return 0;
 }
