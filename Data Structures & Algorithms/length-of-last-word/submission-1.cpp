class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        stringstream ss(s);
        string word;
        while(ss>>word){
            int len = word.size();
            return len;
        }
    }
};