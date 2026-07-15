class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end()); //reverse array
        reverse(nums.begin(),nums.begin()+k); //reverse 1st k elements
        reverse(nums.begin()+k,nums.end()); // reverse starts froms nums[k] to till end
    }
};