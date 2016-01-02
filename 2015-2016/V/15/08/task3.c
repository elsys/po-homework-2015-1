#include <stdio.h>


int main() {

	int cdta = 0;

	do 
		scanf("%d", &cdta);
	while(cdta % 2 == 0 || cdta <= 0);

	int deers[cdta];

	for( int i = 0; i < cdta; i++) {
		scanf("%d", &deers[i]);

		for(int j = 0, cnt = 0; j < i; j++)
			if(deers[j] == deers[i]) {
				cnt++;
				if(cnt >= 2)
					return  -1;
			}
	}

	for(int i = 0; i < cdta; i++) {
		unsigned int met = 0;
		for(int j = 0; j < cdta; j++) {
			if(deers[j] == deers[i])
				met++;
		}
		if(met == 2)
			continue;
		else
			printf("%d", i);

	}
	return 0;
}