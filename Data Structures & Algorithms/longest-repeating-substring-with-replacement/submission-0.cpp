class Solution {
public:
    int characterReplacement(string s, int k) {
        int res = 0 ;
        int n = s.size();
      
        for(int i = 0; i<s.size();i++){
        unordered_map<char , int>f;
        int maxf = 0;
        for(int j = i ; j < s.size() ; j++){
            f[s[j]]++;
            maxf = max(maxf , f[s[j]]);
            if((j-i+1)-maxf<=k){
                res = max(res , j-i+1);
            }
        }
        }
        return res;
    }
};
