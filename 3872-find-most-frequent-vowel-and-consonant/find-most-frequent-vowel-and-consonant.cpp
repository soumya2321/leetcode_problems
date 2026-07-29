class Solution {
public:
    int maxFreqSum(string s) {
        int vc=0,cc=0,maxx=1;
        unordered_map<char,int>res;
        for(int i=0;i<s.size();i++){
            res[s[i]]++;
        }
        for(auto a:res){
            if(a.first=='a' || a.first=='e'||a.first=='i'||a.first=='o'||a.first=='u'){
                vc=max(vc,a.second);
            }
            else{
                cc=max(cc,a.second);
            }

        }
        return vc+cc;
        
    }
};