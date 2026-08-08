class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size(),target,odd,ans=0;
        for(int i=0;i<n;i++){
            target=(i+1)*(n-i);
            odd=(target+1)/2;
            ans+=arr[i]*odd;
        }
        return ans;
    }
};