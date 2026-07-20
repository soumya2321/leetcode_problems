class Solution {
public:
    char repeatedCharacter(string s) {
        string res;
        for(auto c: s){
            res[c]++;
            if(res[c]==2){
                return c;
            }
        }
        return 0;
        
    }
};