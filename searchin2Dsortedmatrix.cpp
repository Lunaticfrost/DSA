#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int i=0;
        int j=matrix[0].size()-1;
        while(i<matrix.size() && j>=0)
        {
            if(matrix[i][j]==target){
                return true;
            }
            if(matrix[i][j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
}

int main(){

    vector<vector<int>> matrix;
    matrix={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    cout<<"enter element to search: "<<endl;
    int n;
    cin>>n;
    cout<<endl;
    cout<<searchMatrix(matrix,n);;


    return 0;
}