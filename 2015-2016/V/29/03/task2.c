 #include<stdio.h>
int main(){
    char str[50];
    char rev[50];
    int i=-1,j=0;

    scanf("%s",str);
   
    while(str[++i]!='\0');

    while(i>=0)
     rev[j++] = str[--i];

    rev[j]='\0';
  
    printf("%s",rev);
  
    return 0;
}
