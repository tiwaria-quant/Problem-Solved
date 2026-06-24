class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string a = strs[0];
        string z = strs[strs.size()-1];
        string res = "";
        int n = a.size();
        int m = z.size();
        int i = 0;
        while(i<m && i<n && a[i]==z[i]){
            res+=a[i];
            i++;
        }
        return res;
    }
};