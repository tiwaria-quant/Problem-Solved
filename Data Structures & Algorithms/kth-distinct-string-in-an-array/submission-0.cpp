class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(auto s: arr){
            mp[s]++;
        }
        int cnt = 0;
        for(auto a: arr){
            if(mp[a]>1){
                continue;
            }
            else{
                cnt++;
                if(cnt==k){
                    return a;
                }
            }
        }
        return "";
    }
};