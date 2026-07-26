class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        int maxx=INT_MIN,minn=INT_MAX;
        double avg=0,sum=0;
        for(int i=0;i<salary.size();i++){
            minn=min(minn,salary[i]);
            maxx=max(maxx,salary[i]);
            sum+=salary[i];
        }
        return (sum-minn-maxx)/(n-2);
    }
};