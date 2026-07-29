class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>vec;
        unordered_map<int,int>res;
        for(int i=0;i<nums.size();i++){
            res[nums[i]]++;
        }
        for(auto a:res){
            if(a.second>n/3){
                vec.push_back(a.first);
            }
        }
        return vec;
    }
};