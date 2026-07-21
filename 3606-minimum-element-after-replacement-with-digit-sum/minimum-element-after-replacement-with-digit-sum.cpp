class Solution {
public:
    int minElement(vector<int>& nums) {
        //int rem;
        int minn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int sum=0;
            while(a!=0){
                int rem=a%10;
                sum+=rem;
                a/=10;
            }
            minn=min(sum,minn);
        }
        return minn;
        
    }
};