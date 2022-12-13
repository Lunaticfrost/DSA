#include<bits/stdc++.h>
using namespace std;



int main(){

   string str;
        cout<<"enter string: "<<endl;
        cin>>str;

    string ptr ="";

    for(int i=str.length()-1;i>=0;i--){
        ptr+=str[i];
    
    }  
    cout<<ptr;
    



    return 0;

}