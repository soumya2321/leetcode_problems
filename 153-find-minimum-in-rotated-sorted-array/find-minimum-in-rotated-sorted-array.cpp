class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=n;i>=0;i--){
        ans=nums[i];
        }
        return ans;

        
    }
};