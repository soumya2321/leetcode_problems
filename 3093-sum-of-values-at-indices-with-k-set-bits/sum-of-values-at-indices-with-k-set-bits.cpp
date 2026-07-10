class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int count=0,ans=0;
        for(int i=0;i<nums.size();i++){
            int sb=0,ele=i;
            while(ele!=0){
                int rem=ele%2;
                sb+=rem;;
                ele/=2;
            }
            if(sb==k) ans+=nums[i];
        }
        return ans;
        
    }
};