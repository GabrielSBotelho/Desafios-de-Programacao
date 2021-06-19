/* 
Question Description: https://leetcode.com/problems/remove-outermost-parentheses/
*/
class Solution {
public:
    string removeOuterParentheses(string s) {
        
        stack <char> stack;
        string res;
        
        for(auto x : s){
            if(x == '('){
                if(stack.size() > 0){
                    res += x;
                }
                stack.push(x);
            }else{
                if(stack.size() > 1){
                    res += x;
                }
                stack.pop();
            }
        }
        
        return res;
    }
};