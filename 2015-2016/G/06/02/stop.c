#include <stdio.h>

int main() {

char a[100];
do {
	scanf("%s",a);
	if(a[0]=='S' && a[1]=='T' && a[2]=='O' && a[3]=='P') {
	break; 
	}
	else {
	int i=0;
	for(;i<100;i++) {
		if(a[i]>='a' && a[i]<='z') {
			a[i]= a[i]-32;
		}
	}
	printf(">%s\n" ,a);
}

}while(1);
return 0;
}
