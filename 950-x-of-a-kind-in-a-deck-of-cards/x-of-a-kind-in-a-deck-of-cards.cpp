class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> res;
        unordered_set<int>ans(deck.begin(),deck.end());
        for (int i = 0; i < deck.size(); i++) {
            res[deck[i]]++;
        }
        int g=0;
        for(auto &a:res){
            g=gcd(g,a.second);
        }
        return g>=2;
    }
};