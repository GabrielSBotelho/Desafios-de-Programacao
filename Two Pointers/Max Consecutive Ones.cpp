class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int k = 0;
        vector<int> res;
        
        for(auto x : nums){
            if(x == 1){
                k++;
            }else{
                res.push_back(k);
                k = 0;
            }
        }
        
        res.push_back(k); // insere a última contagem de k no caso de terminar em 1
        
        int maximum = 0;
        for(auto y : res){
            if(y > maximum) maximum = y;
        }
        
        return maximum;
    }
};