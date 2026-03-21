class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> m;
        for(int i=1;i<=n;i++){
        if(i%5==0 && i%3==0) m.push_back("FizzBuzz");
        else if(i%5==0 &&i%3!=0) m.push_back("Buzz");
        else if(i%3==0 &&i%5!=0) m.push_back("Fizz");
        else m.push_back(to_string(i));
        }
        return m;
    }
};