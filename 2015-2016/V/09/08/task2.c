#include <stdio.h>
int main()
{
  int n=0, i=0;
  char message[160];
  
  //printf("Enter message: \n");
  fgets(message, 160, stdin);
  int j = strlen(message);
  for (i; i<j; i++){
    switch (message[i]){
      case 'a': n++; break;
      case 'd': n++; break;
      case 'g': n++; break;
      case 'j': n++; break;
      case 'm': n++; break;
      case 'p': n++; break;
      case 't': n++; break;
      case 'w': n++; break;
      case ' ': n++; break;
      case 'b': n+=2; break;
      case 'e': n+=2; break;
      case 'h': n+=2; break;
      case 'k': n+=2; break;
      case 'n': n+=2; break;
      case 'q': n+=2; break;
      case 'u': n+=2; break;
      case 'x': n+=2; break;
      case 'c': n+=3; break;
      case 'f': n+=3; break;
      case 'i': n+=3; break;
      case 'l': n+=3; break;
      case 'o': n+=3; break;
      case 'r': n+=3; break;
      case 'v': n+=3; break;
      case 'y': n+=3; break;
      case 's': n+=4; break;
      case 'z': n+=4; break;
    }
  }
  printf ("%d", n);
  return 0;
}
