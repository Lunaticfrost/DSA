#include<bits/stdc++.h>
using namespace std;

 //Solution made on leet code i.e no driver code.
 //T.C = O(n)  S.C= O(1);

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        int i,j;
        for(i=n-2;i>=0;i--)//Find the first decreasing number
        {
            if(nums[i]<nums[i+1]){
                break;
            }
        }
        if(i<0){
            reverse(nums.begin(),nums.end());//if there is no decreasing order
        }
        else{
            for(j=n-1;j>i;j--)// Find the number just greater than selected number to swap it
            {
                if(nums[j]>nums[i]){
                    break;
                }
            }
            swap(nums[i],nums[j]);// Swap both numbers
            reverse(nums.begin()+i+1,nums.end());// reverse the rightside array of that number 
        }
    }
};