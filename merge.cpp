#include<bits/stdc++.h>
using namespace std;


int merge(int a[],int b[],int n1, int n2){
     int n3=n1+n2;
    int m[n3];
    int g=0;
    for(int i=0;i<n1;i++){
        m[g]=a[i];
        g++;
    }

    for(int j=0;j<n2;j++){
        m[g]=b[j];
        g++;
    }
    cout<<"the new array is : "<<endl;
    for(int k=0;k<n3;k++){
        cout<<m[k];
        cout<<endl;
    }

}



int main(){

     int n1;
    cout<<"enter size of 1st "<<endl;
    cin>>n1;
    int a[n1];
    cout<<"enter elements: "<<endl;
    
    for(int i=0;i<n1;i++){
        cin>>a[i];
        cout<<endl;
    }
    int n2;
    cout<<"enter size of 2nd "<<endl;
    cin>>n2;
    int b[n2];
    cout<<"enter elements: "<<endl;
    
    for(int i=0;i<n2;i++){
        cin>>b[i];
        cout<<endl;
    }
    merge(a,b,n1,n2);
    


    return 0;
}