class Solution {
public:
    bool isAnagram(string s, string t) {
        int x=s.size();
        int y=t.size();
        if(x!=y){
            return false;
        }

        unordered_map <int,int> mp;

        for(int i=0;i<x;i++){
            mp[s[i]-'a']++;
            mp[t[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(mp[i]!=0){
                return false;
            }
        }
        return true;
    }
};