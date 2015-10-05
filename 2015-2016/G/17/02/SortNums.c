 #include <stdio.h>

void main (void)

{
    int j,i,temp,a,lenght=0;
    int nums[1000];
    while(1)
    {
        printf("input a:");
        scanf("%d",&a);
        if(a==42){
                break;}
        nums[lenght]=a;
        lenght++;
    }
for(i=0;i<lenght-1;i++)
{
    for(j=0;j<lenght-1;j++)
    {
        if(nums[j]>nums[j+1])
        {
            temp=nums[j];
            nums[j]=nums[j+1];
            nums[j+1]=temp;
        }
    }
}
for(i=0;i<lenght;i++)
printf("%d ",nums[i]);

}
