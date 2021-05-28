// problem description: https://leetcode.com/problems/find-smallest-letter-greater-than-target/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int start = 0;
        int end   = letters.size()-1;
        char res = -1;
        
        while(start <= end){
            
            int mid = (start + end)/2;
            
            if( letters[mid] > target ){
                end = mid-1;
                res = letters[mid];
            } else {
                start = mid+1;
            }
            
        } 
        
        if( res == -1 ){
            res = letters[0];
        }
        
        return res;
        
    }                
};