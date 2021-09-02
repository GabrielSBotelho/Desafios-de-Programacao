class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> curr;
        vector<int> res;
        int nsize = nums.size();
        
        curr.push_back(nums.front());
        
        for (int i = 1; i < nsize; i++) {
            curr.push_back(curr[i - 1] ^ nums[i]);            
        }
        
        int maxi = (1 << maximumBit) - 1;

        for (int j = 0; j < nsize; j++) {
            res.push_back(maxi ^ curr[j]);
        }

        reverse(res.begin(), res.end());
        
        return res;
    }
};