class Solution {
public:
  
  
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int long long val= m*1LL*k*1LL;
        if(n<val) return -1;
       
       int min=bloomDay[0];
       int max=bloomDay[0];
       for(int i=0;i<n;i++){
        if(max<bloomDay[i]){
            max=bloomDay[i];
        }
                if(min>bloomDay[i]){
            min=bloomDay[i];
        }
        
       }
       int low=min;
       int high=max;
       while(low<=high){
     int  mid=(low+high)/2;
        int bouqformed=0;
        int count=0;
       for(int i=0;i<n;i++){
        if(mid>=bloomDay[i]){
            count++;
        }
        else{
            bouqformed+=(count/k);
            count=0;
        }
       }
       bouqformed+=(count/k);
       
        if(bouqformed<m){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
       }
       return low;
    }
};