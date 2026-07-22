class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum=0;
        int dsum=0;

        for(int i = 0; i < nums.size(); i++){
            esum += nums[i];
            
            int m = nums[i];
            while(m>0){
                dsum+=m%10;
                m/=10;
            }
        }
        return abs(esum-dsum);
    }
};