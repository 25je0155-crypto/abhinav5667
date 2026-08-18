class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
     map<int,int> mpp;
     for(int i=0;i<n;i++){
        int num=nums[i];
        int k=target-nums[i];
        if(mpp.find(k)!=mpp.end()){
             return {mpp[k],i};
        }
        mpp[num]=i;
     } 

       return{};  
    }
};