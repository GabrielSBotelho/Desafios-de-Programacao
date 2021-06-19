/*
Question Description: https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/
*/

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        
        sort( nums.begin(), nums.end(), greater<int>() );
        int total = accumulate(nums.begin(), nums.end(), 0);
        vector <int> res;
        int acc = 0;

        if(nums.size() == 1){
            return nums;
        }

        for(auto x : nums ){
            acc = acc + x;
            res.push_back(x);

            if(acc > total - acc){
                break;
            }
        }
        
        return res;
    }
};  