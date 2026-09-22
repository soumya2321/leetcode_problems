class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>ans1;
        unordered_map<string,int>ans2;

        for(int i=0;i<words1.size();i++){
            ans1[words1[i]]++;
        }
        for(int i=0;i<words2.size();i++){
            ans2[words2[i]]++;
        }
        int count=0;
        for (auto &p : ans1) {
            if (p.second == 1 && ans2[p.first] == 1) {
                count++;
            }
        }
        return count;
    }
};