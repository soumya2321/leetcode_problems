class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn=INT_MAX;
        int maxx=0;
        int m=prices.size();
        for(int i=0;i<m;i++){
            minn=min(prices[i],minn);
            maxx=max(maxx,prices[i]-minn);
        
        }
        return maxx;
    }
};