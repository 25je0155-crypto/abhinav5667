class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        
        int low=0;
        int high=n-1;
        int mid;
        int first=0;
        int last=n-1;
        while(low<=high){
            mid=(low+high)/2;
            if((mid==0 && nums[mid]>nums[mid+1]) ||(mid==n-1 && nums[mid]>nums[mid-1])){
                 return mid;
            }
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1] ) return mid;
           else if(nums[mid]>nums[mid+1] && nums[mid]<nums[mid-1]){
          high=mid-1;
            }
            else{
             low=mid+1;
            }
        }
        return -1;
    }
};