/* 
Question Description: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
*/

class Solution {
public:
    int minAddToMakeValid(string s) {
        int total = s.size();
        stack <int> stack;
        
        for(auto x : s){
            if(stack.empty()){
                stack.push(x);    
                
            }else if(stack.top() == '(' && x == ')'){
                stack.pop();
                total = total - 2;
                
            }else{
                stack.push(x);
            }
        }
        
        return abs(total);
        
    }
};