#include<bits/stdc++.h>
using namespace std;

int insert(int a[], int n , int d){
    
    int cnt=0;
    for(int i=0;i<n;i++)//finding position
    {
        if(d>a[i]){
            cnt++;
        }
    }
    
    
    
    
    n=n+1;
    for(int i=n-1;i>=cnt;i--)//increasing array size
    {
      a[i+1] = a[i];
    }
    a[cnt]=d;//adding element at position

    cout<<"the new array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int del(int a[], int n , int pos){

    for(int i = pos-1;i<n;i++){
        a[i]=a[i+1];
    }
    n=n-1;

    cout<<"the new array is: "<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


}

int delsorted(int a[], int n, int d){
    
    for(int i=0;i<n;i++)//loop to find number
    {
         
         if(a[i]==d)
         {
            for(int j = i;j<n;j++){
            a[j]=a[j+1];
            
            }
         }
    }
    n=n-1;
    cout<<"the new array is: "<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}


int main(){

    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements: "<<endl;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<endl;
    }

    /*cout<<"enter number to insert"<<endl;
    int d;
    cin>>d;
    cout<<endl;
    insert(a,n,d);*/
    /*int pos;
    cout<<"which position: "<<endl;
    cin>>pos;
    del(a,n,pos);*/
     int d;
    cout<<"which elemet: "<<endl;
    cin>>d;
    delsorted(a,n,d);


    return 0;
}