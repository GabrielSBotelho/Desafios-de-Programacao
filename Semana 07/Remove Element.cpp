class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        if(nums.size() == 0){
            return 0;
        }
        
        int k = 0;
        int end = nums.size();
        
        for(int i = 0; i < end; i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;

    }
};