#include <stdio.h>
int main()
{
  int n = 0, i, j, temp = 0;
  int deers[200];
  
  do{
    scanf("%d", &n);
  }while(n<=0 || n>=200 || n%2==0);
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
  printf("%d", deers[i]);
  return 0;
}
