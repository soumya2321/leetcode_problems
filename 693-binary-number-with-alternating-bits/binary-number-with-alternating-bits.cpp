class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int>res;
            while(n!=0){
                int rem=n%2;
                res.push_back(rem);
                n/=2;
            }
        for(int i=0;i<res.size()-1;i++){
            if(res[i]==res[i+1]){return false;
            }
        }
        return true;;
    }
};