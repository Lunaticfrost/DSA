#include<bits/stdc++.h>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string,int> m;
    //insertion
    //1
    pair<string,int> p =make_pair("babbar",3);
    m.insert(p);

    //2
    pair<string,int> pair2("love",2);
    m.insert(pair2);

    //3
    m["mera"]=1;

    //There will only be one entry for every key. key will always be unique

    //search
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;
    cout<<m["unknown"]<<endl; //it creates an unknown entry with value 0;
    //we should use m.at;

    //size
    cout<<m.size()<<endl;

    //to check presence
    cout<<m.count("love")<<endl;

    //erase
    m.erase("love");


    //iterator
    unordered_map<string,int> :: iterator it =m.begin();
    while(it !=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }



    return 0;
}