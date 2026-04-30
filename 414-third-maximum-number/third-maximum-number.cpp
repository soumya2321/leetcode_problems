class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        if(s.size()<3) return *s.rbegin();
        s.erase(prev(s.end()));
        s.erase(prev(s.end()));

        return *s.rbegin();
        
    }
};