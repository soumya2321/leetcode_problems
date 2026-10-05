class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int>ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for(auto a:ans){
            if(a.second==1){
                return a.first;
            }
        }
        return 0;
    }
};