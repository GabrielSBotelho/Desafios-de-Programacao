class Solution {
public:
    int hammingDistance(int x, int y) {
        int hamming = x ^ y;
        int res = 0;

        while (hamming) {
            res += hamming & 1;
            hamming >>= 1;
        }

        return res;        
    }
};