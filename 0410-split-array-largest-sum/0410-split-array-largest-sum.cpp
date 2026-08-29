class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int max=nums[0];
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(max<nums[i]){
                max=nums[i];
            }
        }
        int low=max;
        int high=sum;
        while(low<=high){
            int mid=(low)+((high-low)/2);
            int div=1;
            int sumass=0;
            for(int i=0;i<n;i++){
                if(sumass+nums[i]<=mid){
                    sumass+=nums[i];
                }
                else{
                    div++;
                    sumass=nums[i];
                }
            }
            if(div>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};