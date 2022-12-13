#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string>m;
    m[1]="jaat";
    m[2]="Kumar";
    m[13]="Sahil";

    m.insert({5,"bheem"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Find 13-> "<<m.count(13)<<endl;
    m.erase(13);
    return 0;
}
//every task  O(log n) and in unordered map search is O(n) becuase it is implemented using heap.