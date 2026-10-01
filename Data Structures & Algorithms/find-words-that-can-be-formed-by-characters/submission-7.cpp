class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        string res = "";
        for(auto a: words){
            unordered_map<char,int>mp;
            for(char c: chars){
            mp[c]++;
        }
            int r = a.size();
            int cnt = 0;
            for(char m: a){
                if(mp[m]<=0){
                   // cout << m <<" "<<mp.count(m);
                    break;
                }
                else{
                    mp[m]--;
                   // cout<< m <<" "<< "freq of m "<<mp[m]<<endl;
                    cnt++;
                }
            }
            if(cnt==r){
                res+=a;
               // cout << a <<" "<<cnt<< " "<<r <<" ";
            }
        }
        int ans = res.size();
        return ans;
    }
};