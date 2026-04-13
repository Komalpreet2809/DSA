class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
       unordered_set<int>s;

       for(int num:nums){
        if(s.count(num)){
            return true;
        }
        s.insert(num);
       }
       return false;
    }
};