#include <stdio.h>
int main()
{
  int n = 0, i, j, temp = 0;
  int deers[200];
  
  printf("Enter amount of deers: \n");
  do{
    scanf("%d", &n);
  }while(n<=0 || n>=200 || n%2==0);
  printf("Enter the deer's tags: \n");
  for (i = 0; i < n; i++){
    scanf("%d", &deers[i]);
  }
  for (i=0; i<n; i++){
    for (j=0; j<n; j++){
      if (deers[i] == deers[j]){
        temp++;
      }
    }
    if (temp == 1)
      break;
    else
      temp = 0;
  }
  printf("Rudolph's tag is %d \n", deers[i]);
  return 0;
}
