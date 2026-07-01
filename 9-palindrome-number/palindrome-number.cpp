class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        long long ori=x;
        while(x>0){
            long long dig=x%10;
            rev=rev*10+dig;
            x/=10;
        }
        return ori==rev;
    }
    
};