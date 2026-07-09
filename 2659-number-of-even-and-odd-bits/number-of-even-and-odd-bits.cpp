class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>res;
        while(n != 0) {
            int rem = n % 2;
            res.push_back(rem);
            n/=2;  
        }
        int even_c=0,odd_c=0;
        for(int i=0;i<res.size();i++){
            if(res[i]==1 && i%2==0){
                even_c++;
            }
            else if(res[i]==1&& i%2!=0){
                odd_c++;
            }
        }
        return {even_c,odd_c};
    }
};