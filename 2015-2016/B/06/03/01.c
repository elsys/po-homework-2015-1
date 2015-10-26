int main()
{
    int v,a=1,b=1,c=0;
    scanf("%d", & v);
    while(v>0)
    {
    while(b<=v-1)
    {
    printf(" ");
    b++;
    }
    b=1;
    while(c!=((2*a)-1))
    {
    printf("+");
    c++;
    }
    printf("\n");
    a++;
    c=0;
    v--;
    }
}
