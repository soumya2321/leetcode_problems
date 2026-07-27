class Solution {
public:
    int maxFreqSum(string s) {
        int vc=0,cc=0;
        unordered_map<char,int>freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        for(auto a:freq){
            if(a.first=='a'||a.first=='e'||a.first=='i'||a.first=='o'||a.first=='u'){
                vc=max(vc,a.second);
            }
            else{
                cc=max(cc,a.second);
            }
        }
        return cc+vc;
    }
};