class Solution {
public:
    
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = 0;
        int j = 0;
        int sum = 0;
        int n_size = nums.size();
            
        for(int i = 0; i < n_size; i++){
            sum += nums[i];
            while(sum - nums[j] >= target && j <= i){
                sum -= nums[j];
                j++;
            }
            if(sum >= target){
                if(res == 0 || res > (i - j + 1)){
                    res = (i - j + 1);
                }
            }
        }

        return res;
    }
};