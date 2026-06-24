class Solution {
public:
    int scoreOfString(string s) {
        int n = s.size();
        int ans = 0;
        for(int i = 0;i<n-1;i++){
            int a = s[i] - '0';
            int b = s[i+1]-'0';
            int diff = abs(a-b);
            ans+=diff;
        }
        return ans;
    }
};