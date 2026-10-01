class Solution {
public:
    int reverse(int x) {
        int ans=0,rev=0;
        while(x!=0){
            int rem=x%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10) return false;
            rev=rev*10+rem;
            x/=10;
        }return rev;
        
    }
};