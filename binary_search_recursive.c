#include<stdio.h>

int binary(int arr[], int value, int l, int r);

void main()
{
    int n,i,j,temp,value;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int arr[n];
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
//sort
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("sorted....\n");
for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
printf("enter the value to be searched: ");
scanf("%d",&value);
printf("the value is at location %d", binary(arr,value,0,n-1));
}

int binary(int arr[], int value, int l, int r)
{ int mid;
  if(l<=r)
  {
    mid=l+(r-1)/2;
  
  if(arr[mid]==value)
  {
      return mid;
  }
  if(arr[mid]>value)
  {
     return binary(arr,value,l,mid-1);
  }
  if(arr[mid]<value)
  {
       return binary(arr,value,mid+1,r);
  }
  }
  
}
