class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto a:freq){
            if(a.second>=2){
                ans.push_back(a.first);
            }
        }
        return ans;
        
    }
};