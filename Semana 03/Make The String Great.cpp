/* 
Question Description: https://leetcode.com/problems/make-the-string-great/
*/

class Solution {
public:
    
    
    string makeGood(string s) {
        string res;
        int succ;
        stack <int> stack;
        
        for(int i = 0; i < s.length(); i++){
            
            if(stack.empty()){
                stack.push(s[i]);
            } else if (s[i] == stack.top() ){
                stack.push(s[i]);
            } else if ( tolower(s[i]) == stack.top() || tolower(stack.top()) == s[i] ){
                stack.pop();
            } else {
                stack.push(s[i]);
            }
                
        }   
                
        res.resize( stack.size() );
        
        while(!stack.empty()){
            res[stack.size() - 1] = stack.top();
            stack.pop();
        }
        
        return res;

    }
};