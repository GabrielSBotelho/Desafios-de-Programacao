// problem description: https://leetcode.com/problems/guess-number-higher-or-lower/

class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        int end = n;
        int mid = -1;
        
        if(guess(n) == 0) return n; // caso n seja o picked number
        
        while(start <= end){
            
            mid = start + (end-start)/2;
            
            if(guess(mid) == 0){
                break;
            }else if(guess(mid) == 1){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        
        return mid;
    }
};