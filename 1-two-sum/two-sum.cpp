class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
        */
        /*
        map<int ,int>freq;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(freq.find(x)!=freq.end()){
                return {freq[x],i};
            }
            freq[nums[i]]=i;
	    }
        return { };
        */
        map<int ,int>freq;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(freq.find(x)!=freq.end()){
                return{freq[x],i};
            }
            freq[nums[i]]=i;
        }
        return{ };
    }
};