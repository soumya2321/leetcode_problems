class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minn = INT_MAX;
        int sum = 0;
        int i = 0;

        for(int j = 0; j < n; j++) {
            sum += nums[j];

            while(sum >= target) {
                minn = min(minn, (j - i) + 1);
                sum -= nums[i];
                i++;
            }
        }

        return (minn == INT_MAX) ? 0 : minn;
    }
};