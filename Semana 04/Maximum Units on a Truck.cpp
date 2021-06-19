/*
Question Description: https://leetcode.com/problems/maximum-units-on-a-truck/
*/

class Solution {
public:
    static bool compare(vector<int> a, vector<int> b){
        return (a[1]) > (b[1]);
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int acc = 0;
        sort( boxTypes.begin() , boxTypes.end(), compare); 
        
        for(auto x: boxTypes){
            
            int box = min(x[0], truckSize);
            acc = acc + (box * x[1]);  
            truckSize -= box;  
            
            if(!truckSize){
                break;
            } 
        }
        return acc;
    }
};