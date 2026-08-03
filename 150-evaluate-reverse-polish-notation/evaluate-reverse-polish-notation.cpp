// 
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string &tok : tokens) {
            if(tok == "+" || tok == "-" || tok == "*" || tok == "/") {
                int right = st.top(); st.pop();
                int left = st.top(); st.pop();
                
                if(tok == "+") st.push(left + right);
                else if(tok == "-") st.push(left - right);
                else if(tok == "*") st.push(left * right);
                else st.push(left / right); 
            } else {
                st.push(stoi(tok));
            }
        }
        return st.top();
    }
};
