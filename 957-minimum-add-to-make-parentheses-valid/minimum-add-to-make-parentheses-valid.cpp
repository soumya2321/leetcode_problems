class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0,add=0;
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
            }
            else{
                if(count>0){
                    count--;
                }
                else{
                    add++;
                }
            }
        }
        return count+add;
    }
};