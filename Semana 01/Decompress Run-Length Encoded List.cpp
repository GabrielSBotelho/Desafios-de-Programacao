// find the description on: https://leetcode.com/problems/decompress-run-length-encoded-list/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        int size_vec = nums.size();
        vector <int> result;
        int frequency = 0;
        int i = 0;
         
        while(i < size_vec){
            frequency = nums[i];
            
            while(frequency != 0){
                result.push_back(nums[i+1]);
                frequency--;
            }

            i+=2;
        }
        
        return result;
    }
};


