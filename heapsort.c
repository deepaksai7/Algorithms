#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void heapify(int arr[], int n, int i)
{
    int temp;
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int temp;
    for (int i = n / 2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }


    for (int i=n-1; i>=0; i--)
    {
        temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;

        heapify(arr, i, 0);
    }
}
void printarray(int arr[], int n)
{
    for (int i=0; i<n; ++i){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void main()
{ int size;
  printf("enter the size of the array:");
  scanf("%d",&size);
  int arr[size];
  srand(time(0));
  for(int i=0;i<size;i++)
  {
      arr[i]=rand()%100;
  }
  printf("\narray before sorting\n");
  for(int i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
    clock_t start,end;
    double timer;
    start=clock();
    heapSort(arr, size);
    end=clock();
    timer=((double)end-(double)start)/CLOCKS_PER_SEC;
    printf("Sorted array is \n");
    printarray(arr, size);
    printf("\nTime taken: %lf\n",timer);
}
