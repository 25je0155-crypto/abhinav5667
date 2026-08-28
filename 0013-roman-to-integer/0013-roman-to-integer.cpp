class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        
        int count=0;
       
    
        
for(int i=0;i<n;i++){
    int curr;
    if(s[i]=='I'){
        curr=1;
    }
   else if(s[i]=='V'){
        curr=5;
    }
   else if(s[i]=='X'){
        curr=10;
    }
   else if(s[i]=='L'){
        curr=50;
    }
   else if(s[i]=='C'){
        curr=100;
    }
   else if(s[i]=='D'){
        curr=500;
    }
    else if(s[i]=='M'){
        curr=1000;
    }
    int nxt;
    if(i+1<n){
    if(s[i+1]=='I'){
        nxt=1;
    }
   else if(s[i+1]=='V'){
        nxt=5;
    }
   else if(s[i+1]=='X'){
        nxt=10;
    }
   else if(s[i+1]=='L'){
        nxt=50;
    }
   else if(s[i+1]=='C'){
        nxt=100;
    }
   else if(s[i+1]=='D'){
        nxt=500;
    }
    else if(s[i+1]=='M'){
        nxt=1000;
    }
    if(curr<nxt){
      count+=-curr;
    }
    else{
        count+=curr;
    }
    }
    else
    {
        count+=curr;
    }
}

        return count;
    }
};