class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro = 1;
        int z = 0;
        for(int n: nums){
            if(n==0){
                z++;
            }
            else{
                pro*=n;
            }
        }
        int l = nums.size();
        vector<int> ans(l,0);
        if(z>=2){
            return ans;
        }

        for(int i = 0;i<l;i++){
            if(nums[i]==0){
                vector<int> zq(l,0);
                zq[i] = pro;
                return zq;
            }
            else{
                ans[i] = pro/nums[i];
            }
        }
        return ans;
    }
};
