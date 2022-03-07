#include <stdio.h>
#include <stdlib.h>
void BFS(int*,int);
void DFS(int*,int);
void EnQueue(int*,int,int);
int DeQueue(int*);
int front=-1,rear=-1,top=-1;
int main()
{
   int*queue,*a,v,e,i,j;
   printf("\n Enter the number of vertices and edges in the graph:- ");
   scanf("%d %d",&v,&e);
   a=(int*)calloc(v*v,sizeof(int));
   printf("\nEnter the edges:\n");
   while(e!=0)
   {
       scanf("%d %d",&i,&j);
       *(a+i*v+j)=*(a+j*v+i)=1;
       e--;
   }
   printf("\nThe Adjacency Matrix is:\n");
   for(i=0;i<v;i++)
   {
       for(j=0;j<v;j++)
        printf("%d\t",*(a+i*v+j));

       printf("\n");
   }
   printf("\nThe BFS Traversal of the graph:\n");
   BFS(a,v);
  // printf("\nThe DFS Traversal of the graph");
  // DFS(a,v);
   return 0;
}
void BFS(int*a,int n)
{
    int*visited,i,*queue,j;
    visited=(int*)calloc(n,sizeof(int));
    queue=(int*)malloc(n*sizeof(int));

    EnQueue(queue,0,n);
    *(visited+0)=1;

    while(front!=-1)
    {
        i=DeQueue(queue);
        printf("%d\t",i);
        for(j=0;j<n;j++)
        {
            if(*(a+i*n+j)==1 && *(visited+j)!=1)
            {
                EnQueue(queue,j,n);
                *(visited+j)=1;
            }
        }

    }
}
void EnQueue(int*a,int val,int n)
{
    if(rear<n-1)
    {
        if(front==-1)
        {
            front++;
            rear++;
            *(a+front)=val;
        }
        else
        {
            rear++;
            *(a+rear)=val;
        }
    }
}
int DeQueue(int*a)
{
    int val;
    val=*(a+front);
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front++;
    }
    return val;
}
