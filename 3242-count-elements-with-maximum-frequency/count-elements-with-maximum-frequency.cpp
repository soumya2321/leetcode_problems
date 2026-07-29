class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxx=0;
        unordered_map<int,int>res;
        for(int i=0;i<nums.size();i++){
            res[nums[i]]++;
        }
        for(auto a:res){
            maxx=max(maxx,a.second);
        }
        int sum=0;
        for(auto a:res){
            if(a.second==maxx){
                sum+=maxx;
            }
        }
        return sum;
    }
};