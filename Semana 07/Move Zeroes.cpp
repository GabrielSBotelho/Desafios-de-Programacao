class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int counter = 0;
        int end = nums.size();
        
        for(int i = 0; i < end; i++){
            if(nums[i] != 0){
                swap(nums[counter], nums[i]);
                counter++;
            }
        }
        
    }
};