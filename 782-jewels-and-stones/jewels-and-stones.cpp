class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>res(jewels.begin(),jewels.end());
        int count=0;
        for(auto a:stones){
            if(res.count(a)){
                count++;
            }
        }
        return count;
    }
};