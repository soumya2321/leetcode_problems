class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>res;
        unordered_map<int,int>freq;
        while(n!=0){
            int div=n%10;
            res.push_back(div);
            n/=10;

        }
        for(int i=0;i<res.size();i++){
            freq[res[i]]++;
        }
    int sum=0;
    int mul=1;
        for(auto a:freq){
            mul=a.second*a.first;
            sum+=mul;
        }
        return sum;
        
    }
};