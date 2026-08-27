class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int>res(candyType.begin(),candyType.end());
        int n=candyType.size()/2;
        int m=res.size();
        return min(n,m);
    }
};