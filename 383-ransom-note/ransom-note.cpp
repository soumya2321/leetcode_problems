class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(char ch:ransomNote) mp[ch]++;
        for(char ch:magazine) mp[ch]--;

        for(auto &[key,value]:mp){
        if(value>0) return false;
    }
    return true;
}
};