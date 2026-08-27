class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>res;
        for(int i=0;i<nums.size();i++){
            res[nums[i]]++;
        } 
        int maxx=INT_MIN;       
        for(auto a:res){
            maxx=max(maxx,a.second);
        }
        int sum=0;
        for(auto c:res){
            if(c.second==maxx){
                sum+=c.second;
            }
        }
        return sum;
    }
};