#include<stdio.h>
#define size 10
void main(){
    int arr[size],i,temp,flag=0,j,passes=0;
    printf("enter any 10 elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

for(j=0;j<size;j++){
    flag=0;
for(i=0;i<size-j;i++)
{   
    if(arr[i]>arr[i+1]){
       temp=arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;
       flag=1;
    }
}
passes++;
if(flag==0){
    break;
}

}

printf("the sorted array is\n");
for(i=0;i<size;i++)
{
    printf("%d ",arr[i]);
}
printf("\nPasses: %d",passes);
}