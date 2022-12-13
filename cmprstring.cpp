#include<bits/stdc++.h>
using namespace std;


int main(){

    string str1;
        cout<<"enter first string: "<<endl;
        cin>>str1;
     string str2;
        cout<<"enter second string: "<<endl;
        cin>>str2;

        if(str1==str2){
            cout<<"equal strings"<<endl;
        }  
        else if(str1.length()>str2.length()){
            cout<<"string 1 is greater"<<endl;
        }
        else{
            cout<<"string 2 is greater"<<endl;
        }


    return 0;
}