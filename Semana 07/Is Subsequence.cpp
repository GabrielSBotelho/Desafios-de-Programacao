class Solution {
public:
    bool isSubsequence(string s, string t) {
        int t_st = 0, t_end = t.size();
        int s_st = 0, s_end = s.size();
        
        for(int i = 0; i < t_end && s_st < s_end; i++){
            if(t[i] == s[s_st]){
                s_st++;
            }
        }
        
        if(s_st == s_end) return true;
        else return false;
    }
};