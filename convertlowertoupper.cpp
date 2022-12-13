#include<bits/stdc++.h>
using namespace std;



int main(){

    string name;
        cout<<"enter name in lowercase: "<<endl;
        cin>>name;
        string ptr="";
            int i=0;
            while(name[i]!='\0'){
                if(name[i]>='a' && name[i]<='z' ){
                    ptr += (name[i]-32);
                }
                else
                {
                    ptr = ptr + name[i];
                }
                i++;
            }
            
           cout<<ptr;
           cout<<endl;

    



    return 0;
}