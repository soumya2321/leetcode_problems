class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
        int pro=1;
        int x=n;
        while(x>0){
            int rem=x%10;
            pro=pro*rem;
            x/=10;
        }
        if(pro%t==0) return n;
            n++;
        }
        
    }
};