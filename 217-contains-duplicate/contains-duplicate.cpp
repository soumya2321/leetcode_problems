class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>se;
        for(int i=0;i<n;i++){
            se.insert(nums[i]);
        }
        int m=se.size();
        return n!=m;
    }
};