class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int i=0,j=n-1,x=n-1;
        while(i<=j){
            if(abs(nums[i]) >abs(nums[j])){
                ans[x]=nums[i]*nums[i];
                i++;
            }
            else{
                ans[x]=nums[j]*nums[j];
                j--;
            }
            x--;
        }
        return ans; 
    }
};