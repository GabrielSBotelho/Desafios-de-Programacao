/*
Question Description: https://leetcode.com/problems/assign-cookies/
*/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        int tam_g = 0;
        int tam_s = 0;        
        int happy_child = 0; 
        
        sort( g.begin() , g.end() );
        sort( s.begin() , s.end() );
        
        while( tam_g < g.size() && tam_s < s.size() ){
            if(g[tam_g] <= s[tam_s]){
                happy_child++;
                tam_g++;
                tam_s++;
            }else{
                tam_s++;
            }   
        }
        
        return happy_child;
        
    }
};