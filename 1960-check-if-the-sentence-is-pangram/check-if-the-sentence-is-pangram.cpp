class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char>sen;
        for(auto c:sentence){
            sen.insert(c);
            if(sen.size()==26){
                return true;
            }
        }
        return false;
    }
};