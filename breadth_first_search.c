#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 9

int queue[9], visited[9];
int front=0, rear=-1, count=0;

bool isEmpty();
bool isFull();
void enqueue(int data);
int dequeue();

void main()
{
    int graph[9][9]={{0,1,1,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0},
    {1,0,0,1,0,0,1,0,0},
    {0,0,1,0,1,1,0,0,1},
    {0,0,0,1,0,0,0,0,0},
    {0,0,0,1,0,0,1,0,0},
    {0,0,1,0,0,1,0,1,0},
    {0,0,0,0,0,0,1,0,1},
    {0,0,0,1,0,0,0,1,0}};
    
    int vertex=0,i,j;
    for(j=0;j<9;j++){visited[j]=0;}
    printf("%d ",vertex);
    visited[vertex]=1;
    for(j=0;j<9;j++)
    {  
      //explore
      for(i=0;i<9;i++)
      {
          if(graph[vertex][i]!=0)
    {
        
        if(visited[i]!=1){
        enqueue(i);
        
        printf("%d ",i);
        visited[i]=1;
        }
    }
      }

      vertex=dequeue();
    }


















}
bool isEmpty() {
   return count == 0;
}

bool isFull() {
   return count == MAX;
}

void enqueue(int data) {

   if(!isFull()) {
	
      if(rear == MAX-1) {
         rear = -1;            
      }       

      queue[++rear] = data;
      count++;
   }
}

int dequeue() {
   int data = queue[front++];
	
   if(front == MAX) {
      front = 0;
   }
	
   count--;
   return data;  
}
