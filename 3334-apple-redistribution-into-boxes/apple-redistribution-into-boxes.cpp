class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end(), greater<int>());

        int appsum = 0, capsum = 0, count = 0;

        for (int i = 0; i < apple.size(); i++) {
            appsum += apple[i];
        }

        for (int j = 0; j < capacity.size(); j++) {
            capsum += capacity[j];
            count++;
            
            if (capsum >= appsum) {
                return count;
            }
        }

        return count;
    }
};