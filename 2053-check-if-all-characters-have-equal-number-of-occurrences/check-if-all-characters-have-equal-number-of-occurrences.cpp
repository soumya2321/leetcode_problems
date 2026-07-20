class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>res;
        for(auto a:s){
            res[a]++;
        }
        int expected=-1;
        for(auto p:res){
            expected=p.second;
            break;
        }
        for(auto m:res){
            if(m.second!=expected) {
                return false;
            }
        }
        return true;
    }
};