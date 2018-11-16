#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i;
    printf("enter the numbers: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){arr[i]=1;}
    for(i=2;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}