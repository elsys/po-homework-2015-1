#include <stdio.h>
#include <stdlib.h>

#define swap(a,b) \
	a += b; \
	b = a - b; \
	a = a - b;

#define positive( x ) ((x < 0) ? (-x) : (x))

void sort(int[], int);
int getSize(int);
int int2arr(int[], int);

int main() {

	
	//printf("%d", ({ int a = 5, b = 4; swap(a,b); a; }));

	int n = 0, num, i = 0; //n = size of the array below; num = temporary number we will get
	scanf("%d",&num);//scanf("%d", ({printf("Enter a number:"); &num;}));

	num = positive(num);	

	//printf("%d\n", num);

	n = int2arr((int[1000]){0}, num);
	
	int* arr = malloc(n*sizeof(int));
	
	int2arr(arr, num);
	

	//printf("%d", n);

	sort(arr, n);

	//printf("%d",*arr);
	
	i = 0;
	while(i < n) {
		int curr_cnt = 0;
		while(arr[i] == arr[i+1]) { curr_cnt++; i++;}
		if(curr_cnt >= 1) printf("The number %d is repeated exactly %d times\n", arr[i], curr_cnt+1);
		i++;
	} /*
	for(i = 0; i < n; i++)
		printf("%d ",arr[i]);	*/
	//printf("%d",*arr);
	
	
	return 0;

}



int int2arr(int arr[], int num) {

	int i = 0;

	for( ; num != 0 ; num/=10, i++) {
	
		arr[i] = num%10;
	
	}

	return i;

}


/// READ ME
void sort(int arr[], int n)
{
  int j, k;
 
  for (j = 0; j < n - 1; j++)
  {
    for (k = 0; k < n - j - 1; k++)
    {
      if (arr[k] > arr[k+1]) { /// WITHOUT { or } in this and 2 lines after the program dosen`t work as it should...Why?
        swap(arr[k], arr[k+1]) /// If there isnt ; the program dosent give errors...Why?
	}
    }
  }
} /// END READ ME // I am aware that this problem could be because I have used macro functions above( swap )
