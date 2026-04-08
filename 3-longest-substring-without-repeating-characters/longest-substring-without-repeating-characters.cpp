class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int maxlen=0;
        int left=0;
        unordered_set<char>se;

        for(int right=0;right<n;right++){
            while(se.find(s[right])!=se.end()){
                se.erase(s[left]);
                left++;
            }
            se.insert(s[right]);
            maxlen=max(maxlen,right-left+1);
        }
            return maxlen;
    }
};