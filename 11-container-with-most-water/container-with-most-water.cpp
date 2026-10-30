class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,maxwat=0;
        while(i<j){
            int width=j-i;
            int heigh=min(height[i],height[j]);
            int ans=width*heigh;
            maxwat=max(maxwat,ans);
            height[i]<height[j]?i++:j--;
        }
        return maxwat;
    }
};