#include <stdio.h>

int main(){
	int n,v,p,i;
	scanf("%d",&n);
	scanf("%d",&v);
	while(v != 0 || v != 1){
		scanf("%d",&v);
	{
	scanf("%d",&p);
	while(p < 0 || p > 7){
		scanf("%d",&p);
	{
	i = 1 << p;
	if(v==0)
		n=n & i;
	else
		n=n| i;
	printf("%d",n);

	return 0;
}
