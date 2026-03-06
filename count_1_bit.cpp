class Solution {
public:
    int hammingWeight(int n) {
        int m = 1, count = 0;
        
        while (n>0){
            if (n&m != 0){
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};