class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>res;
        for(int i=0;i<nums.size();i++){
            res[nums[i]]++;
        }
        int sum=0;
        for(auto a:res){
            if(a.second==1){
                sum+=a.first;
            }
        }
        return sum;
        
    }
};