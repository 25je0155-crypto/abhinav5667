class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
     int n=weights.size();
    
     int sum=0;
     int max;
     for(int i=0;i<n;i++){
        if(max<weights[i]){
            max=weights[i];
        }
        sum+=weights[i];
     }
     int ans;
      int low=max;
     int high=sum;
     while(low<=high){
       int mid=(low+high)/2;
       int sum1=0;
       int count=1;
            for(int i=0;i<n;i++){
                
                sum1+=weights[i];
                 if(mid<sum1){
                    count+=1;
                    sum1=weights[i];
                 }
            }
            if(count>days){
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
     }
     return ans;
    }
};