class Solution {
public:
    bool isPrime(int n){
        if (n <= 1)
            return false;
        
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;

        return true;
    }
    
    int countPrimeSetBits(int left, int right) {
        int bits = 0;
        int res = 0;
        
        for(int i = left; i <= right; i++){
            bits = __builtin_popcount(i);
            if(isPrime(bits)){
                res++;
            }
        }
        
        return res;
    }
};