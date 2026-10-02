class Solution {
public:
    bool isPalindrome(int x) {
        long long a=x;
        long long b;
        long long rev=0;
        while(x>0){
            int rem=x%10;
            rev=rev*10+rem;
            x/=10;
        }
            if(rev==a) return true;
            return false;
        
    }
};