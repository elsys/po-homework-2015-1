#include <stdio.h>
#include <ctype.h>

typedef enum {false, true} bool;

bool convert(int);

int main() {
	int num;
	scanf("%d", &num);
	for(;convert(num) != 1;num++);
	printf("%X", num);
	return 0;
}

bool convert(int num) {
	int tmp = num, len=0;
	while(tmp > 0) {
		len++;
		tmp >>= 4;
	}
	tmp = num;
	char arr[len];
	for(int i = 0; tmp > 0; i++, tmp /= 16) {
		if(tmp%16 >= 10)
			arr[i] = 'A' + (tmp%16);
		else
			arr[i] = '0' + (tmp%16);
	}
	for(int i = 0, j = len-1; i < len/2; i++, j--) {
		if(arr[i] != arr[j])
			return false;
	}
	return true;
}
