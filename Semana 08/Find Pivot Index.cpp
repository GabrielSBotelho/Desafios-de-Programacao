class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int start = 0;
        
        for(int x : nums){
            sum += x;
        }

        for(int i = 0; i < nums.size(); i++){
            sum -= nums[i];
            if(start == sum){
                return i;
            }
            start += nums[i];
        }
        return -1;
    }
};