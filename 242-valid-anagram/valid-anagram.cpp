class Solution {
public:
    bool isAnagram(string s, string t) {
        int x=s.size();
        int y=t.size();
        if(x!=y){
            return false;
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s==t;
    }
};