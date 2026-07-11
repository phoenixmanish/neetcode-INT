class Solution {
public:
    bool isAnagram(string s, string t) {
        int sn = s.size();
        int tn = t.size();
        if(sn != tn )return false;
        unordered_map<char, int>mp;
        for(char sh : s){
            mp[sh] = mp[sh]+1;
        }
        for(char ch : t){
            if(mp.find(ch) == mp.end() || mp[ch] == 0)return false;
            mp[ch]=mp[ch]-1;
        }
        return true;
    }
};
