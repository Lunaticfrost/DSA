#include<bits/stdc++.h>
using namespace std;


int main(){

      string str;
        cout<<"enter string: "<<endl;
        cin>>str;
        int pos = str.length();
        /*for(int i=(pos)/2;i<pos;i++){
            cout<<str[i];
        }*/
        cout<<(str.substr(pos/2));




    return 0;
}
