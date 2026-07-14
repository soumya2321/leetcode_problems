class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq1[100000]={0};
        int freq2[100000]={0};
        int n=s.size();
        int m=t.size();

        for(int i=0;i<n;i++){
            freq1[s[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            freq2[t[i]-'a']++;
        }
        bool isTrue=true;
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                isTrue=false;
                break;
            }
        }
        return isTrue;
    }

};