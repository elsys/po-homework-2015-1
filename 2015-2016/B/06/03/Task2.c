int main()
{
    char a[20];
    int k;
    int i=0;
    printf(" ");
    gets(a);
    k=strlen(a);
    for(i=-1;i<=k-1;k--)
        printf("%c",a[k]);
    return 0;
}

