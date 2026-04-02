// class Solution {
// public:
//     int countTriples(int n) {
//         int count = 0;
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= n; j++) {
//                 for (int z = 1; z <= n; z++) {
//                     if (i * i + j * j == z * z) {
//                         count++;
//                     }
//                 }
//             }
//         }
//         return count;
//     }
// };
class Solution {
public:
    int countTriples(int n) {
        int count = 0;

        for (int a = 1; a <= n; a++) {
            for (int b = 1; b <= n; b++) {
                int c2 = a * a + b * b;
                int c = sqrt(c2);

                if (c <= n && c * c == c2) {
                    count++;
                }
            }
        }

        return count;
    }
};