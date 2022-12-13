#include<bits/stdc++.h>
using namespace std;

void gcd(int m , int n)
{
int i;
int max=0;
if(m>n){
    for(i=1;i<=n;i++)
    {
        
        if(m%i==0 && n%i==0)
        {
            max=i;
        }
    }
    cout<<max<<" is gcd"<<endl;
}
else{
    for(i=1;i<=m;i++)
    {
        
        if(m%i==0 && n%i==0)
        {
            max=i;
        }
    }
    cout<<max<<" is gcd"<<endl;
}


}


int main(){

    int m,n;
    cout<<"enter first number: "<<endl;
    cin>>m;
    cout<<"enter second number: "<<endl;
    cin>>n;
    gcd(m,n);



    return 0;
}