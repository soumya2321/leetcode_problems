class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int minn=INT_MAX;
        int maxx=INT_MIN;
        for(int i=0;i<nums.size();i++){
                minn=min(minn,nums[i]);
                maxx=max(maxx,nums[i]);
        }
        return 1ll*(maxx-minn)*k;

        
    }
};