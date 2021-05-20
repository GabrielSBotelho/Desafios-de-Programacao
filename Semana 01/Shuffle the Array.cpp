// find the description on: https://leetcode.com/problems/shuffle-the-array/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector <int> first_half;
        vector <int> secd_half;
        vector <int> result;
        
        for(int i = 0; i < n; i++){
            first_half.push_back(nums[i]);
            secd_half.push_back(nums[i+n]);
        }
        
        for(int j = 0; j < n; j++){
            result.push_back(first_half[j]);
            result.push_back(secd_half[j]);
        }
        
        return result;
    }
};