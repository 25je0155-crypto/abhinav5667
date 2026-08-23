class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int m=strs[0].size();
         string same;
        int j=0;
        while(j<m){
                    bool v=true;
         for(int i=1;i<n;i++){
        
                if(strs[i-1][j]!=strs[i][j]){
                 return same;
                 v=false;
                }
            
         }
         if(v==true){
                    same.push_back(strs[0][j]);
                    j++;
                }
        }
        return same;
    }
};