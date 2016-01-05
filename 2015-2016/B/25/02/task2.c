#include <stdio.h>
#include <string.h>
int main()
{
    char arr[1000];
    int i, l, n;

    scanf("%[^\n]s", arr);
    l=strlen(arr);
    for(i=3; i<l ; i++){
        if(arr[i]=='P'||arr[i]=='p' &&
           arr[i-1]=='O'||arr[i-1]=='o' &&
           arr[i-2]=='T'||arr[i-2]=='t'&&
           arr[i-3]=='S'||arr[i-3]=='s'
           ) {l=i; break;}
        }

    printf("\n");
    for(i=0; i<l-1; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
    return 0;
}
