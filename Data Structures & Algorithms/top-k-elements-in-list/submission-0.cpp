class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;
        unordered_map<int,int>mp;
        for(int n: nums){
            mp[n]++;
        }
        for(auto &p: mp){
            pq.push({p.second,p.first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>ans;
        while(!pq.empty()){
            int a = pq.top().second;
            ans.push_back(a);
            pq.pop();
        }
        return ans;
    }
};
