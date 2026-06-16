class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for (int x : nums) {
            if (x == 2) ans.push_back(-1);
            else {
                int b = 1;
                while (x & b) b <<= 1;
                ans.push_back(x ^ (b >> 1));
            }
        }
        return ans;
    }
};