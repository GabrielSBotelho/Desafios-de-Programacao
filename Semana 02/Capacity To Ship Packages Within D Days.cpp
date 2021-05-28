// problem description: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

class Solution {
public:
    
    int capacity(vector<int>&w, int days, int mid){
        
        int acc = 0;
        int count_days = 1;
        
        for(auto x : w){
            if(acc+x <= mid){
                acc += x;
            }else{
                count_days += 1;
                acc = x;
                
                if(acc > mid) return false;
            }
        }
        
        return count_days <= days;
        
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int start        = accumulate(weights.begin(), weights.end(), 0)/ days;
        int end          = accumulate(weights.begin(), weights.end(), 0);
        int min_capacity = 0;
        
        
        while(start <= end){
            
            int mid = floor((start + end)/2);
            
            if(capacity(weights, days, mid)){
                min_capacity = mid;
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        
        return min_capacity;
    }
};