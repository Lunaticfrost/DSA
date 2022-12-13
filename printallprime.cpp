#include<bits/stdc++.h>
using namespace std;

void prime(int n)
{

  int i,j;
  for( i=1;i<=n;i++)//number
     {
    int cnt = 0;
      for(j=1;j<=n;j++)//diviser
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
      }
    
  }
  
  

}

int main()
{
    int n;
    cout<<"Till which number? "<<endl;
    cin>>n;
    prime(n);

    return 0;
}