#include<stdio.h>
#include<time.h>

void mergesort( int l, int h);
void merge(int l, int m, int h);
int arr[10],arr2[9];
void main()
{
    int n=10,i;
    clock_t start,end;
    double timer;
   
    
    srand(time(0));
    //inserting random numbers
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%100;
    }
    printf("array before sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    start=clock();
    mergesort(0,n-1);
   end=clock();
   timer= (double)end-start/CLOCKS_PER_SEC;
   printf("\nsorted array is\n");
   for(i=0;i<n;i++)
   {
       printf("%d ",arr2[i]);
   }
   printf("time taken: %lf",timer);
}
void mergesort( int l, int h)
{
int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        mergesort(l,mid);
        mergesort(mid+1,h);
        merge(l,mid,h);
    }

   
}

void merge(int l, int m, int h)
{
    int l1,l2,i;
    for(l1=l,l2=m+1,i=l;l1<=m && l2<=h;i++)
    {
           if(arr[l1]<=arr[l2])
           {
            arr2[i]=arr[l1++];
           }
           else{
               arr2[i]=arr[l2++];
           }
    }
    while(l1<=m)
    {
        arr2[i++]=arr[l1++];
    }
    while(l2<=h)
    {
        arr2[i++]=arr[l2++];
    }

    for(i=l;i<=h;i++)
    {
        arr[i]=arr2[i];
    }
}