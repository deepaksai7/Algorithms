#include<stdio.h>
void main()
{
    int i,arr[10],key,j;
    printf("enter the elements:\n");
    for(i=0;i<10;i++)
    {
      scanf("%d",&arr[i]);
    }
   for(i=1;i<10;i++)
   {
       key=arr[i];
       j=i-1;
       while(j>=0 && arr[j]>key)
       {
           arr[j+1]=arr[j];
            j=j-1;
       }
       arr[j+1]=key;
   }
   printf("after sorting\n");
   for(i=0;i<10;i++)
   {
       printf("%d ",arr[i]);
   }
}
