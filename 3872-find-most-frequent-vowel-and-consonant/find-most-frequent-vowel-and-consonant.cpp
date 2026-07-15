class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>freq;
        for(int i=0;i<s.size();i++){
             freq[s[i]]++;          
        }
        int maxx1=0;
        int maxx2=0;
        for(auto a:freq){
            if(a.first=='a'||a.first=='e'||a.first=='i'||a.first=='o'||a.first=='u'){
                maxx1=max(maxx1,a.second);
            }
            else{
                maxx2=max(maxx2,a.second);
            }
        }
        //cout<<maxx1<<" "<<maxx2<<endl;
        return maxx2+maxx1;

        
    }
};