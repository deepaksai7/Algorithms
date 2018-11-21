#include<stdio.h>

void main()
{
    int n,i,min,j,temp;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the values\n");
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }

for(i=0;i<n;i++)
{
  min=i;
  for(j=i+1;j<n;j++)
  {
     if(arr[j]<arr[min])
     {
        min=j;
     }
  }
  temp=arr[i];
  arr[i]=arr[min];
  arr[min]=temp;
}


printf("sorted array is \n");
for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}

}