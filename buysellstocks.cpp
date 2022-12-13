class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min= INT_MAX;
        int max=0;
        int curr=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            curr=prices[i]-min;
            if(max<curr){
                max=curr;
            }
        }
        return max;
    }
    
    
};