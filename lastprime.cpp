#include<bits/stdc++.h>
using namespace std;

void prime(int n)
{

  int i,j;
  for( i=n-1;i>0;i--)//number
     {
    int cnt = 0;
      for(j=1;j<n;j++)//diviser
      {
        if(j<=i)
        {
           if(i%j==0)
           {
             cnt++;
           }

        }
      }
      if(cnt==2){
         cout<<i<<endl;
         break;
      }
      
    
  }
  
  

}

int main()
{
    int n;
    cout<<"enter a number:  "<<endl;
    cin>>n;
    prime(n);

    return 0;
}