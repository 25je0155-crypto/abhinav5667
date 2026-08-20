class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit;
       int maxi=0;
        int min=prices[0];
         for(int i=1;i<n;i++){
           int cost=prices[i];
         
          profit=cost-min;
        maxi=max(maxi,profit); 
        if(min>prices[i]){
            min=prices[i];
        }
       
       }
       
         return maxi;
    }
};