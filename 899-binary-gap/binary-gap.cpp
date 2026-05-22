class Solution {
public:
    int binaryGap(int n) {
    vector<int>res;
    int last=-1;
    int maxx=0;
    while(n>0){
        res.push_back(n%2);
        n/=2;
    }
    for(int i=0;i<res.size();i++){
        if(res[i]==1){
            if(last!=-1){
                maxx=max(maxx,i-last);
            }
            last=i;
        }
    }
    return maxx;

        
    }
};