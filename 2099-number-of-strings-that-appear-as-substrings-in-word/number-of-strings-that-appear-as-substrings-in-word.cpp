class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(int i=0;i<patterns.size();i++){
            //for(int j=0;j<patterns[i].size();j++){
                if(word.find(patterns[i])!=string::npos){
                    count++;
                }
            
        }
        return count;
        
    }
};