class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {      
        unordered_map<int,int> freq;
        int n = nums.size()/2;
        int res;
        
        for(auto x : nums){
            freq[x]++;
        }
        
        for(auto & [v, f] : freq){
            if(f == n){
                res = v;
                break;
            }
        }
        
        return res;
    }
};