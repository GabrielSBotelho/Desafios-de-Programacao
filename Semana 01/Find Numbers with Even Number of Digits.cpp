// find the description on: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int size_n = 0;
        int total = 0;
        
        for(int x : nums){
            size_n = floor(log10(x) + 1); 
            if(size_n % 2 == 0) total++;   
        }
        
        return total;

    }
};