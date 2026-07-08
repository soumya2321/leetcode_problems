class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0,n;
        for(int i=0;i<nums.size();i++){
            int c=0;
            while(nums[i]!=0){
                int rem=nums[i]%10;
                c++;
                nums[i]/=10;
            }
            if(c%2==0){
                count++;
            }
        }
        return count; 
    }
};