class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
       long long sum=0;
       int i=0;
       unordered_map<int,int>res;
       for(int j=0;j<k;j++){
        sum+=nums[j];
        res[nums[j]]++;
       }
       long long ans = (res.size()==k ? sum : 0);
        for(int j=k;j<nums.size();j++){
            sum-=nums[i];
            res[nums[i]]--;
            if(res[nums[i]]==0) res.erase(nums[i]);
            sum+=nums[j];
            res[nums[j]]++;
            if(res.size()==k){
                ans=max(ans,sum);
            }
            i++;
       }
       return ans;
       
    }
};