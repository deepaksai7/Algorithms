#include<stdio.h>
#define size 6

int find_min(int arr[], int a);

void main(){
    int arr[size],i,min,temp;
    printf("enter %d numbers",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
      min=find_min(arr,i);
      temp=arr[i];
      arr[i]=arr[min];
      arr[min]=temp;
    }


printf("the sorted array is\n");
for(i=0;i<size;i++)
{
    printf("%d ",arr[i]);
}


}

int find_min(int arr[], int a)
{
   int min,i,loc=a;
   min=arr[a];
   for(i=a;i<size;i++)
   {
      if(arr[i]<min)
      {
          min=arr[i];
          loc=i;
      }
   }
return loc;
}