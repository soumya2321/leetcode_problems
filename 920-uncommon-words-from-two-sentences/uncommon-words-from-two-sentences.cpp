class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string s3=s1+" "+s2;
        vector<string>ans;
        unordered_map<string,int>res;
        string word;
        stringstream ss(s3);         
        while (ss >> word) {
            res[word]++;             
        }
        for(auto a:res){
            if(a.second==1){
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};