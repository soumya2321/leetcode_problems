class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maxx = nums[n-1]*nums[n-2];
        int minn =nums[0]*nums[1];
        return maxx-minn;
    }
};