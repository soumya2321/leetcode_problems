class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int minn=0,l=0,r=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                l++;
            }
            else if (moves[i]=='R'){
                r++;
            }
            else{
                minn++;
            }
        }
        return abs(l-r)+minn;

        
    }
};