class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1 || n==2) return 1;

        int k=0,m=1,p=1;
        int next=0;
        for(int i=3;i<=n;++i){
            next=k+m+p;
            k=m;
            m=p;
            p=next;
        }
        return next;
    }
};