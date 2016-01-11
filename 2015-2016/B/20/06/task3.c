#include<stdio.h>
int main(){
	int a[100];//vavedjame masiva
	int d;//vavezdame chisloto		
scanf("%d",&d);//vavezdame chisloto
		while(d % 2 ==0){
			scanf("%d",&d);//vavezdame chisloto	
		}		
		
    int i=0;

	for(i=0;i<d;i++){
		scanf("%d",&a[i]);
	}
int j=0;
int count;
//sortirane na masiv
	 for (i = 0; i < d; ++i)
    {
        for (j = i + 1; j < d; ++j)
        {
            if (a[i] > a[j])
            {
                count =  a[i];
                a[i] = a[j];
                a[j] = count;
            }
        }
    }
	//namirane na chisloto rudolf
    for (i = 0; i < d; ++i){
		if((a[i-1] != a[i]) && (a[i] !=a[i+1])){
			printf("%d",a[i]);
		}
	}


	return 0;
}
