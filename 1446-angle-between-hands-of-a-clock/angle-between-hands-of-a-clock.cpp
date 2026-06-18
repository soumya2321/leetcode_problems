class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourhand=(hour % 12 + minutes/60.0)*30;
        double minutehand=minutes*6;
        double diff=fabs(hourhand-minutehand);
        return min(diff,360-diff);

        
    }
};