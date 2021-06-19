/* 
Question Description: https://leetcode.com/problems/baseball-game/
*/

class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        double dbl_scr;
        int num;
        
        for(auto x : ops){
            if(x == "C"){
                st.pop();
                
            }else if(x == "D"){
                dbl_scr = st.top() * 2;
                st.push(dbl_scr);
                
            }else if (x == "+"){
                int l1 = 0;
                int l2 = 0;
                int total = 0;
                    
                l1 = st.top();
                st.pop();
                    
                l2 = st.top();
                st.pop();
                    
                total = l1 + l2;
                st.push(l2);
                st.push(l1);
                st.push(total);
                
            }else{
                stringstream s(x);
                s >> num;
                
                st.push(num);

            }
            
        }
        
        int sum =0;
        while(!st.empty()){
            sum = sum + st.top();
            st.pop();
        }
        
        return sum;
        
    }
};