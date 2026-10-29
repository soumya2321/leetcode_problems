class Solution {
public:
    bool isPalindrome(int x) {
        long long a=x;
        long long rev=0;
        while(x>0){
            rev=rev*10+x%10;
            x/=10;
        }
        cout<< rev;
        if(rev==a) return true;
        return false;
        
    }
};