class Solution {
public:
    string trafficSignal(int timer) {
        string result;
        if(timer==0){
            result="Green";
        }
        else if(timer==30){
            result="Orange";
        }
        else if(timer>30 && timer<=90){
            result="Red";
        }
        else{
            result="Invalid";
        }
        return result;
        
    }
};