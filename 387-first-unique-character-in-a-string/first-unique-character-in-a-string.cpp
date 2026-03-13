class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>repeat;
        for(auto c:s){
            repeat[c]++;
        }
        for(int i=0;i<s.length();i++){
            if(repeat[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};