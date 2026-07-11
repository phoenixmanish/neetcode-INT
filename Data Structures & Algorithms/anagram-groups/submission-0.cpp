class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string> > grp;
        vector<vector<string>>ans;
        for(string s : strs){
            string temp = s;
            sort(s.begin() , s.end());
           grp[s].push_back(temp);
        }
        for(auto &a : grp){
            
            ans.push_back(a.second);
            
        }
        return ans;
    }
};
