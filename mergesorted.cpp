#include<bits/stdc++.h>
using namespace std;

void mergesorted(int a[], int b[], int n1, int n2)
{

            int n=n1+n2;
            int m[n];

            int i =0,j=0,k=0;
            while(i<n1 && j<n2){

                if(a[i]<b[j]){
                    m[k]=a[i];
                    k++;
                    i++;
                }
                else{
                    m[k]=b[j];
                    k++;
                    j++;
                }
            }

            while(i<n1){
                m[k]=a[i];
                k++;
                i++;
            }
            while(j<n2){
                m[k]=b[j];
                k++;
                j++;
            }
            cout<<"New array is: "<<endl;
            for(i=0;i<n;i++){
                cout<<m[i]<<" ";
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
    mergesorted(a,b,n1,n2);


    return 0;
}