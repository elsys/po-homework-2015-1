#include <stdio.h>

int main() {
	int counter, count, deers_count;
	int deer[200], deer_s[200];
	/* get number of deers */
	scanf("%d", &deers_count);

	for (count = 0; count < deers_count; count++) {
		scanf("%d", &deer[count]);
		deer_s[count] = deer[count];
	}
	for (count = 0; count < deers_count; count++) {
		for (counter = 0; counter < count; counter++) {
			if (deer[count] == deer_s[counter]) {
				deer[count] = 0;
				deer[counter] = 0;
				break;
			}
		}

	}
	for (count = 0; count < deers_count; count++) {
		if (deer[count] != 0)
			printf("\n %d", deer[count]);
	}
}
