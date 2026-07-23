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
        // for(int i=0;i<s1.size();i++){
        //     for(int j=0;j<s2.size();j++){
        //         if(s1[i]==s2[j]){
        //             res.push_back(s1[i]);
        //         }
        //     }
        // }
        for(auto s :s1){
            for(auto t:s2){
                if(s==t){
                    res.push_back(s);
                }
            }
        }
        return res;
    }
};