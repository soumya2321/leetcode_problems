class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude=0,maxaltitude=0;
        for(int g:gain){
            altitude+=g;
            maxaltitude=max(maxaltitude,altitude);
        }
        return maxaltitude;
        
    }
};