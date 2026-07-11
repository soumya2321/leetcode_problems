class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            vector<int>temp;
            int n=nums[i];
            while(n>0){
                temp.push_back(n%10);
                n/=10;
            }
            reverse(temp.begin(),temp.end());
            for(int j=0;j<temp.size();j++){
                res.push_back(temp[j]);
            }
        }

        return res;
        
    }
};