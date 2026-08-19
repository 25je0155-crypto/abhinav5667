class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1;
        int max=nums[0];
        for(int i=0;i<n;i++){
            if(max<nums[i]){
                max=nums[i];
            }
        }
        int high=max;
        while(low<=high){
            int mid=(low+high)/2;
            int t=0;
            for(int i=0;i<n;i++){
                t+=ceil((double)nums[i]/(double)mid);
            }
            if(t>threshold){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};