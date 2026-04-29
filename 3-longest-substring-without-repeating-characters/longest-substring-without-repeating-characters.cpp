class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //map ->O(n)
        unordered_map<char,int>res;
        int i=0,j=0,n=s.size();
        int maxx=0;
        while(j<n){
            res[s[j]]++;
            while(res[s[j]]>1){
            res[s[i]]--;
            i++;
            }
            maxx=max(maxx,(j-i)+1);
            j++;
        }
        return maxx;

    }
};