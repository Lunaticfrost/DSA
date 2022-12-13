#include<bits/stdc++.h>
using namespace std;



int main(){


    int m,n;
    cout<<"enter m: "<<endl;
    cin>>m;
    cout<<endl;
    cout<<"enter n: "<<endl;
    cin>>n;
    cout<<endl;
    int a[m][n];
    cout<<"enter elements: "<<endl;
    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){
            cin>>a[i][j];
            cout<<endl;
        }
    }

    cout<<"The 2-D array is:  "<<endl;
    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){
            cout<<a[i][j];
            cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}
