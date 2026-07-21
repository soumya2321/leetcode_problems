class Solution {
public:
    int passwordStrength(string password) {
        int n=password.size();
        int sum=0;
        unordered_set<char>pass;
        for(auto c:password){
            if(pass.count(c)) continue;
            pass.insert(c);
             if(c>='a' && c<='z'){
                sum+=1;
             }
             else if(c>='A' && c<='Z'){
                sum+=2;
             }
             else if(c>='0' && c<='9'){
                sum+=3;
             }
             else if(c=='!' || c=='@' || c=='#' || c=='$'){
                sum+=5;
             }
        }
        return sum;
    }
};