class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        for(int i:nums){
            int dig=0;
            while(i){
                dig+=i%10;
                i/=10;
            }
            ans=min(ans,dig);
        }
        return ans;
        
    }
};