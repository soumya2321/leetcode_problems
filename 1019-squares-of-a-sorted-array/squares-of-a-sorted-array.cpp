class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int i=0,j=n-1;
            for(int x=n-1;x>=0;x--){
                if(nums[i]*nums[i]>nums[j]*nums[j]){
                    ans[x]=nums[i]*nums[i];
                    i++;
                }
                else{
                    ans[x]=nums[j]*nums[j];
                    j--;
                }
            }
        return ans;
    }
};