class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
      int hash[256]={0};

        for(int i=0;i<n;i++){
           hash[s[i]]++;
        }
        int max=0;
        int l;
        int k=0;
        for(int i=0;i<n;i++){
            max=0;
         for(int j=0;j<256;j++){
           if(max<hash[j]){
              max=hash[j];
              l=j;
             
           }
         }
        
         
           for(int j=0;j<max;j++){
             s[k]=l;
             k++;
           }
           hash[l]=0;
         }
         return s;
    }
};