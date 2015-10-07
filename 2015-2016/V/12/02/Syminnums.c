#include <stdio.h>

int main(){
	int s=0,a,acp,br;
	printf("A:");
	scanf("%d",&a);
	while(s<10){
		br=0;
		acp = a;
		while(acp >= 1){
			if(acp % 10 == s)
				br++;
			acp/=10;
		}
		if(br != 0)
			printf("%d times %d\n",s,br);
		s++;
	}

}
