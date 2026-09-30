class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        multiset<int> st;
        int i=0;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
  auto it=st.end();
        for(int i=0;i<k;i++){
        it--;
        }
        return *it;
    }
};