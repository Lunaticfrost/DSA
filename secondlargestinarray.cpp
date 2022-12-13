#include<iostream>
using namespace std;

void secondlargest(int a[],int n){
    int sec=a[0];
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]<sec && sec<max){
            sec=a[i];
        }
    }
    cout<<"second largest is"<<sec;
  
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

   



    


    return 0;
}