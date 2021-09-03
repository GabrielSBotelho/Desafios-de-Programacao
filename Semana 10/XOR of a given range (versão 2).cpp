class Solution{
    public:
    int getXor(vector<int>&nums, int a, int b){
        int xors = nums[a];
        
        for(int i = a; i < b; i++){
            xors = xors ^ nums[i+1];
        }
        
        return xors;
    }
};