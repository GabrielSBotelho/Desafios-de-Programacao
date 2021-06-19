/* 
Question Description: https://leetcode.com/problems/build-an-array-with-stack-operations/
*/

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int counter = 0;
        vector <string> res;
        
        
        for(int i = 1; i <= n; i++){
            if(counter < target.size()){
                if(i == target[counter]){
                    res.push_back("Push");
                    counter++;
                }else{
                    res.push_back("Push");
                    res.push_back("Pop");
                }
            }
        }
        
        return res;
    }
        

};