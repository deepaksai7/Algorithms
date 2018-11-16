#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 4

int stack[4];     
int top = -1;
int visited[4];

int isempty();
int isfull();
int pop();
int push(int data);

void main()
{
    int graph[4][4]={{0,1,1,0},
    {0,0,1,0},
    {1,0,0,1},
    {0,0,0,1}};
    int vertex=0,i,j;
   
   
    for(i=0;i<4;i++)
    {
        visited[i]=0;
    }

    
    push(vertex);
    for(i=0;i<4;i++)
    {
      vertex=pop();
      printf("%d ",vertex);
      visited[vertex]=1;
      //explore
      for(j=0;j<4;j++)
      {
          if(graph[vertex][j]!=0)
          {
              if(visited[j]!=1)
              {
                  push(j);
                  
                  
              }
          }
      }


    }

}

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAX)
      return 1;
   else
      return 0;
}

int pop() {
   int data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } 
}

int push(int data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } 
}