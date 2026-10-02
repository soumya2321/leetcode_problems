class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs.back();
        string result="";
        int minn=min(first.size(),last.size());
        for(int i=0;i<minn;i++){
            if(first[i]==last[i]){
                result+=first[i];
            }
            else{
                break;
            }
        }
        return result;
        
    }
};