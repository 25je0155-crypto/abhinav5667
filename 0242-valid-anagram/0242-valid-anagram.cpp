class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int l=t.size();
        if(n!=l){
            return false;
        }
       int  hash1[26];
int hash2[26];
for(int i=0;i<n;i++){
    hash1[(s[i]-'a')]++;
    hash2[(t[i]-'a')]++;
}
for(int i=0;i<26;i++){
if(hash1[i]!=hash2[i]){
    return false;
}
       }
              return true;;
    }
};