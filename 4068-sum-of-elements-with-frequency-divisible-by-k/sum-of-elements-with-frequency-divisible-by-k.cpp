class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int sum=0;
        for(auto a :freq){
            if(a.second%k==0){
                sum+=a.first*a.second;
            }

        }
        return sum;
        
    }
};