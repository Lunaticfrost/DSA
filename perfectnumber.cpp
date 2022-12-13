#include<bits/stdc++.h>
using namespace std;


//void perfect(){
    
//}

int main(){


int i,j;
    for( i=1;i<=500;i++)//loop for numbers to check
    {
        
        int sum=0;
           for( j=1;j<=500;j++)//loop for divisers
           {
               
               if(j<i)
               {
                   if(i%j==0)
                   {
                   sum= sum+j;
                   }
               }
             
           }
           
           if(sum==i){
            cout<<i<<" is a perfect number."<<endl;
           }
           
    //perfect();
    return 0;
    }
}