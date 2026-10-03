class Solution {
public:
void subset(vector<int>& v1, vector<vector<int>>& v2,vector<int>& nums,int n,int i){
if(i>=n){
     (v2.push_back(v1));
}
else{
v1.push_back(nums[i]);
 subset(v1,v2,nums,n,i+1);
v1.pop_back();
 subset(v1,v2,nums,n,i+1);
}
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v1;
        vector<vector<int>> v2;
    int n=nums.size();
        subset(v1,v2,nums,n,0);
  return v2;
    }
};