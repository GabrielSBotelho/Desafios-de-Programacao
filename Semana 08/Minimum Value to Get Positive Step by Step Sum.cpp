class Solution {
public:
    int minStartValue(vector<int>& nums) {       
        int sum = 0; 
        int minsum = 0;
        
        for(auto n : nums) {
            sum += n;
            minsum = min(minsum, sum);
        }
        return 1 - minsum;
    }
};