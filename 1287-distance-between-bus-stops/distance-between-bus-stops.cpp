class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int n=distance.size();
        if(start>destination ) swap(start,destination);
        int a=accumulate(distance.begin(),distance.end(),0);
        int b=accumulate(distance.begin()+start,distance.begin()+destination,0);
        return min(b,a-b);
        
    }
};