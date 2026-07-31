class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>freq;
        for(int i=0;i<word.size();i++){
            freq[word[i]]++;
        }
        int total=0;
        int cost=0;

        vector<int>count;
        for(auto &p:freq){
            count.push_back(p.second);
        }
        sort(count.rbegin(),count.rend());
        for(int i=0;i<count.size();i++){
            cost=(i/8)+1;
            total+=count[i]*cost;
        }
        return total;
        
    }
};