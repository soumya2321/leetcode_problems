class Solution {
public:
    int splitNum(int num) {
        string st=to_string(num);
        string num1,num2;
        sort(st.begin(),st.end());
        for(int i=0;i<st.size();i++){
            if(i%2==0) num1+=st[i];
            else num2+=st[i];
        }
        return stoi(num1)+stoi(num2);
        
    }
};