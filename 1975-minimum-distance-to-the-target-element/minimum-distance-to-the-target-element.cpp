class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minn=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                minn=min(abs(i-start),minn);
            }
        }
        return minn;
        
    }
};