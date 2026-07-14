class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        int c,maxx=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            c=nums[i]-nums[i-1];
            maxx=max(c,maxx);
        }
        return maxx;
        
    }
};