class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(string s: strs){
            string a = s;
            sort(s.begin(),s.end());
            mp[s].push_back(a);
        }
        vector<vector<string>> ans;
        for(auto r: mp){
            ans.push_back(r.second);
        }
        return ans;
    }
};
