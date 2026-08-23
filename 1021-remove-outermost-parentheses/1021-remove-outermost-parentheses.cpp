class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        string str[100];
        int depth=0;
        int k=0;
        for(int i=0;i<n;i++){
             
            
            if(s[i]=='('){
               
               if(depth>0){
               s[k++]=s[i];
               }
             depth+=1;
            }
            else if(s[i]==')' ){
                depth-=1;

                if(depth>0){
               s[k++]=s[i];
               }
             
            }
        }
        s.resize(k);
   return s;
    }
};