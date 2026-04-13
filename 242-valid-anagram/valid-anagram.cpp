class Solution {
public:
    bool isAnagram(string s, string t) {
        int x=s.size();
        int y=t.size();
        if(x!=y){
            return false;
        }

        int freq[26];

        for(int i=0;i<x;i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                return false;
            }
        }
        return true;
    }
};