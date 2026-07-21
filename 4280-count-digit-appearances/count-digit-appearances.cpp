class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            while(a!=0){
                int rem=a%10;
                if(rem==digit) count++;
                a/=10;
            }
        }
        return count;
        
    }
};