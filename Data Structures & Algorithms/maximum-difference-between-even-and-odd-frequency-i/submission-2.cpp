class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int k = nums.size();
        for(int n: nums){
            mp[n]++;
            if(mp[n]>k/2){
                return n;
            }
        }
        return -1;
    }
};