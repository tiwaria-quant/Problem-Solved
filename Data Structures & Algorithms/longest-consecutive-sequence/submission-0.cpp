class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        unordered_set<int>s(nums.begin(),nums.end());
        for(int i = 0;i<n;i++){
            int x = nums[i];
            if(s.find(x-1)==s.end()){
                int len = 1;
                while(s.find(x+len)!=s.end()){
                    len++;
                }
                ans  = max(ans,len);
            }
        }
        return ans;
    }
};
