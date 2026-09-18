class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                res[nums[i]]++;

            }
        }
        if(res.empty()) return -1;
        int ans=-1,maxfreq=0;
        for(auto &a:res){
            if((a.second>maxfreq) || (a.second==maxfreq && a.first<ans)){
                maxfreq=a.second;
                ans=a.first;
            }
        }

        return ans;
    }
};