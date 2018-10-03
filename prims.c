#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define inf 99999

int extract_min_loc(int a[]);
bool check(int a[], int k);


int main(void)
{
  //initializing the array
  int arr[6][6]={
      {0,3,0,1,0,0},
      {3,0,1,3,0,0},
      {0,1,0,1,5,4},
      {1,3,1,0,6,0},
      {0,0,5,6,0,2},
      {0,0,4,0,2,0}
  };
  int i,j,min_loc,explore_var=0,vertex_count=0,parent_count=0,loc=0,loc1=0,x=0,y=0;
  //other arrays
  int key[6], value[6], vertex[6], parent[6], result[6][6];
  //initializing the values
  for(i=0;i<6;i++)
  {
    key[i]=i;
    vertex[i]=0;
    parent[i]=0;
  }
  value[0]=0;
  for(i=1;i<6;i++)
  {
    value[i]=inf;
  }
  for(i=0;i<6;i++)
  {
    for(j=0;j<6;j++)
    {
      result[i][j]=0;
    }
  }
  //start the process
  for(i=0;i<6;i++)
  {
    min_loc=extract_min_loc(value);
    explore_var=key[min_loc];
    key[min_loc]=inf;
    value[min_loc]=inf;
    for(j=0;j<6;j++)
    {
      if(arr[explore_var][j]!=0 && check(key,j))
      {


          if(arr[explore_var][j]<value[j])
          { //updating value

            value[j]=arr[explore_var][j];
          }
          vertex[j]=j;
          parent[j]=explore_var;

      }

    }
  loc=extract_min_loc(value);
  x=parent[loc];
  y=vertex[loc];
  result[x][y]=1;
  result[y][x]=1;


  }


printf("\nminimum spanning tree is \n");
for(i=0;i<6;i++)
{
  for(j=0;j<6;j++)
  {
    printf("%d ",result[i][j]);
  }
  printf("\n");
}

  return 0;
}
int extract_min_loc(int a[])
{ int i,smallest=0,loc=0;
  smallest=a[0];
  for(i=1;i<6;i++)
  {
    if(a[i]<smallest)
    {
      smallest=a[i];
      loc=i;
    }
  }
return loc;
}

bool check(int a[], int k)
{
  int i,flag=0;
  for(i=0;i<6;i++)
  {
    if(a[i]==k)
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
  {
    return true;
  }
  else{
    return false;
  }
}
