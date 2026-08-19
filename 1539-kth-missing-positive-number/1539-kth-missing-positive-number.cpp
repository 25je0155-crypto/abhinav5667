class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        int l;     
        while(low<=high){
        int   mid=(low+high)/2;
            l=arr[mid]-(mid+1);
           if(k<=l){
            high=mid-1;
           }
           else{
            low=mid+1;
           }
        }
        int num=low+k;
        return num ;
    }
};