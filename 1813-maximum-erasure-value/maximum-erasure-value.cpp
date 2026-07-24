class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0,sum=0,maxx=0;
        unordered_map<int,int>res;
        int n=nums.size();
        for(int j=0;j<n;j++){
            res[nums[j]]++;
            sum+=nums[j];
            while(res[nums[j]]>1){
                res[nums[i]]--;
                sum-=nums[i];
                i++;
            }
            maxx=max(maxx,sum);
        }
        return maxx;
    }
};