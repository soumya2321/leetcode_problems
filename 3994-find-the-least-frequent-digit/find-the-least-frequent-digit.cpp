class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int>ans;
        while(n!=0){
            int rem=n%10;
            ans[rem]++;
            n/=10;
        }
        int minn=INT_MAX,mindigit=-1;;
        for(auto a:ans){
            if(a.second<minn){
                minn=a.second;
                mindigit=a.first;
            }
        }
        return mindigit;
    }
};