class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int z=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="++X" ||operations[i]=="X++"){
                z+=1;
            }
            else if(operations[i]=="--X" ||operations[i]=="X--"){
                z-=1;
            }
        }
        return z;
        
    }
};