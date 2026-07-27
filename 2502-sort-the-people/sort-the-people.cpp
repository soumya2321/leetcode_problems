class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>ans;
        map<int,string,greater<int>>myMap;
        for(int i=0;i<names.size();i++){
            myMap[heights[i]]=names[i];
        }
        for(auto a:myMap){
            ans.push_back(a.second);
        }
        return ans;
    }
};