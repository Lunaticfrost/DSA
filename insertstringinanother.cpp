#include<bits/stdc++.h>
using namespace std;


int main(){

  string str;
        cout<<"enter string: "<<endl;
        cin>>str;
   string add;
      cout<<"enter string to add : "<<endl;
      cin>>add;
    int n;
    cout<<"enter position: "<<endl;
    cin>>n;

    string s1= str.substr(0,n);
    string s2= str.substr(n);

    string current = s1.append(add);
    current.append(s2);
    cout<<current;


    return 0;

}