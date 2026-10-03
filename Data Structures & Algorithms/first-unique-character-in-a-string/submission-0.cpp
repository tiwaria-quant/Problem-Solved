class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        for(auto a : s){
            mp[a]++;
        }
        for(int i = 0;i<s.size();i++){
            char c = s[i];
            if(mp[c]==1){
                return i;
            }
        }
        return -1; 
    }
};