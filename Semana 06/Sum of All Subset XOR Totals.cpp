class Solution {
public:
    int xorSum(vector<int> nums, int n){
        int bits = 0;

        for (int i=0; i < n; ++i)
            bits |= nums[i];

        int ans = bits * pow(2, n-1);

        return ans;
    }
    
    int subsetXORSum(vector<int>& nums) {
        vector<vector <int>> res;
        int sz = nums.size();
        
        return xorSum(nums, sz);
    }
};