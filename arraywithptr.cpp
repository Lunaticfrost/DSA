#include<bits/stdc++.h>
using namespace std;

int main(){


   int a[5]= {1,2,3,4,5};

   int *ptr= &a[0];
   int *ptr2= &a[4];

   while(ptr<=ptr2){
    cout<<*ptr<<endl;
    ptr++;
   }


    return 0;
}