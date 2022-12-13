
#include <bits/stdc++.h>
using namespace std;

int binarysearch(int a[], int n, int s){
    int l=0;
    int h=n-2;
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]==s){
            return mid;
        }
        else if(s<a[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
}


int main() {
    
    int n;
    cout<<"enter size of array: "<<endl;
    cin>>n;
    cout<<"enter elements of array: "<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    cout<<endl;
    int s;
    cout<<"enter element to search: "<<endl;
    cin>>s;
    sort(a,a+n);
    
    int result= binarysearch(a,n,s);
    cout<<"element is at index: "<<result<<endl;
    return 0;

   
}