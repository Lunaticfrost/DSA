#include<iostream>
using namespace std;
#define N 100
int adj_matrix[N][N],n;
int front=-1,rear=-1;
int queue[N];
int status[N];

int empty()
{
 if(front==-1 || front>rear) 
 {
        return 1;
    }
     else
      return 0;
}
void enqueue(int ele)
{
   if(rear==N-1)
    {
            cout<<"Queue overflow "; 
            }
            else
            {    if(front==-1)
            { 
                front=front+1;

         }
           rear=rear+1;
          queue[rear]=ele;
 }

}
int dequeue()
{
      int ele;
      if(front==-1 || front>rear)
      {
            cout<<"Queue underflow ";
            exit(1);
      }
      else
      {
            ele=queue[front];
            front=front+1;
            return ele;
      }
}
void bfs_traversal(int node)
{
      int i;
      enqueue(node);
      while(!empty())
      {
            node=dequeue();
            cout<<node<<" ";
            status[node]=3; //visited
            for(i=0;i<n;i++)
            {
                  if(adj_matrix[node][i]==1 && status[i]==1)
                  {
                        enqueue(i);
                        status[i]==2; //in process
                  }
            }
      }
}

void Traversal()
{
      int node;
      for(node=0;node<n;node++)
      {
            status[node]=1; //unvisited
      }
      cout<<"Enter the starting node ";
      cin>>node;
      bfs_traversal(node);
      for(node=0;node<n;node++)
      {
            if(status[node]==1)
            {
                  bfs_traversal(node);
            }
      }
      
}


int main()
{
      int start,end,total_edges,i;
      cout<<"Enter number of vertices\n";
      cin>>n;
      cout<<"Enter the edges and -1 to break";
      total_edges=n*(n-1);
      for(i=1;i<=total_edges;i++)
      {
            cin>>start>>end;
            cout<<endl;
            if(start==-1 && end==-1)
            {
                  break;
            }
      
            adj_matrix[start][end]=1;
            
      }
      Traversal();
}