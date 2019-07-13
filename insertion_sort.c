#include<stdio.h>
#define size 10 
void main(){
    int arr[size],i,value,hole;
    printf("enter %d numbers\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=1;i<size;i++)
    {
        value=arr[i];
        hole=i;
        while(hole>0 && value<arr[hole-1])
        {
            arr[hole]=arr[hole-1];
            hole--;
        }
        arr[hole]=value;
    }

printf("the sorted array is\n");
for(i=0;i<size;i++)
{
    printf("%d ",arr[i]);
}
}