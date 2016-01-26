#include <stdio.h>

int main() {

	int deers[200];
	int doub[200];
	int count;
	int i = 0;
	int j = 0;

	do {
		scanf("%d", &count);
	}while(count%2 == 0 && (count <= 0 || count > 200));

	for(i = 0; i < count; i++) {
		scanf("%d", &deers[i]);
	}

	for(i = 0; i < count; i++) {
		doub[i] = deers[i];
	}

	for(i = 0; i < count; i++) {
		for( j = 0; j < count; j++) {
			if(i!=j) {
				if(deers[i] == deers[j]) {
					doub[i] = 0;
				}
			}
		}
	}

	for(i = 0; i < count; i++) {
		if(doub[i] != 0 )
			printf("%d", doub[i]);
	}


	return 0;
}
