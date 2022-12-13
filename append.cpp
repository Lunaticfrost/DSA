#include<bits/stdc++.h>
using namespace std;


int main(){

    string str1;
        cout<<"enter first string: "<<endl;
        cin>>str1;
     string str2;
        cout<<"enter second string: "<<endl;
        cin>>str2;   

        string str ="";
            int i=0;
            int k=0;
            while(str1[i]!='\0'){
                str[k]=str1[i];
                k++;
                i++;
            }

            int j=0;
            while(str2[j]!='\0'){
                str[k]=str2[j];
                k++;
                j++;
            }

            for(i=0;i<(str1.length()+str2.length());i++){
                cout<<str[i];
            }


    return 0;
}