class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxx = INT_MIN;
        vector<bool>res;
        for (int i = 0; i < candies.size(); i++) {
            maxx = max(candies[i], maxx);
        }
        for(int i=0;i<candies.size();i++){
            int z = candies[i] + extraCandies;
            if (z >= maxx) {
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }
        return res;
    }
};