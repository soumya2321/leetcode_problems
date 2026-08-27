class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        // unordered_set<int>res(candyType.begin(),candyType.end());
        int n=candyType.size();
         unordered_set<int>res(n);
         for(int i=0;i<n;i++){
            res.insert(candyType[i]);
         }
        int z=candyType.size()/2;
        int m=res.size();
        return min(z,m);
    }
};