class Solution {
public:
    int maxPower(string s) {
        int c=1;
        int maxx=1;
        for(int i=1;i<s.size();i++){
                if(s[i]==s[i-1]){
                    c++;
                }
                else{
                    c=1;
                }
                maxx=max(maxx,c);

        }
        return maxx;
    }
};