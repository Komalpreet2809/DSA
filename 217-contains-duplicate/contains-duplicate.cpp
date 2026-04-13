class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
       unordered_map<int,int>s;
       for(int i=0;i<n;i++){
        if(s[nums[i]]>=1){
            return true;
        }
        s[nums[i]]++;
       }

    return false;
    }
};