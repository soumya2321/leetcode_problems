class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1;
        unordered_set<int>s2;
        vector<int>res;
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        // for(auto s :s1){
        //     for(auto t:s2){
        //         if(s==t){
        //             res.push_back(s);
        //         }
        //     }
        // }
        for(auto a:s1){
            if(s2.find(a)!=s2.end()){
                res.push_back(a);
            }
        }
        return res;
    }
};