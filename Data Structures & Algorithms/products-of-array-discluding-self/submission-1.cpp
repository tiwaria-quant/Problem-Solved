class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int cnt_z=0;
        int pro = 1;

        for(int n: nums){
            if (n==0){
                cnt_z++;
            }
            else{
                pro = pro*n;
            }
            if(cnt_z>=2){
                return ans;
            }
        }
        for(int i = 0;i<nums.size();i++){
            if(cnt_z==1){
            if(nums[i]==0){
                ans[i] = pro;
            }
            }
            else{
                ans[i] = pro/nums[i];
            }
        }
        return ans;
        
    }
};
