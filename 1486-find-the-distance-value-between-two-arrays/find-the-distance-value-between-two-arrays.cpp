class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0,sub;
        for(int i=0;i<arr1.size();i++){
            int c=0;
            for(int j=0;j<arr2.size();j++){
                sub=abs(arr2[j]-arr1[i]);
                if(sub<=d){
                    c++;
                }
            }
            if(c==0){count++;}

        }
        return count;
        
    }
};