#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int divide(int arr[], int first, int last);
void quicksort(int arr[], int first, int last);
void main()
{
    int n,i;
    clock_t start,end;
    double timer;
    printf("enter the number of elements:");
    scanf("%d",&n);
    //declaring the array
    int arr[n];
    //inserting the random elements in the array
    srand(time(0));
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%100;
    }

    //printing the array before sorting
    printf("\nbefore sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    //calling the function
    start=clock();
    quicksort(arr,0,n-1);
    end=clock();
    timer=((double)end-(double)start)/CLOCKS_PER_SEC;
    printf("\nafter sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\ntime taken: %lf",timer);

}
void quicksort(int arr[], int first, int last)
{
    int q;
    if(first<last)
    {
        q=divide(arr,first,last);
        quicksort(arr,first,q-1);
        quicksort(arr,q+1,last);
    }
}

int divide(int arr[], int first, int last)
{
  int pivot,j,temp,i;
  pivot=arr[last];
  i=first-1;
  for(j=first;j<last;j++)
  {
      if(arr[j]<=pivot)
      {
        i++;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
  }
  temp=arr[i+1];
  arr[i+1]=pivot;
  arr[last]=temp;
  return i+1;
}