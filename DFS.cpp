#include<iostream>
using namespace std;
#define MAX 100
int n,adj_matrix[MAX][MAX];
int stack[MAX],top=-1,status[MAX];
void push(int ele)
{
      if(top==MAX-1)
      {
            cout<<"Overflow";
      }
      else
      {
            top=top+1;
            stack[top]=ele;
      }
}
int pop()
{
      if(top==-1)
      {
            cout<<"Underflow";
      }
      else
      {
            return stack[top--];
      }
}
int empty()
{
      if(top==-1)
      {
            return 1;
      }
      else
      {
            return 0;
      }
}

void Traversal()
{
      int node,j;
      for(node=0;node<n;node++)
      {
            status[node]=1; //unvisited
      }
      cout<<"Enter the starting node : ";
      cin>>node;
      
      push(node);
      while(!empty())
      {
            node=pop();
            if(status[node]==1)
            {
                  cout<<node<<" ";
                  status[node]=2;  //visited
            }
            for(j=n-1;j>=0;j--)
            {
                  if(status[j]==1 && adj_matrix[node][j]==1)
                  {
                        push(j);
                  }
            }
      }
      
}

int main()
{
      int start,end,total_edges,i;
      cout<<"Enter number of vertices\n";
      cin>>n;
      cout<<"Enter the edges and (-1 -1) to break";
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
