class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int n: nums){
            mp[n]++;
        }
        for(auto a: mp){
            if(a.second<2){
                return a.first;
            }
        }
        return -1;
    }
};
