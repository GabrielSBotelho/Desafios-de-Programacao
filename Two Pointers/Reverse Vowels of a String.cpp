class Solution {
public:
    
    bool Vogal(char v) {
        if(v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u' || 
           v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U'){
            return true;
        }else{
            return false;
        }
}
    
    string reverseVowels(string s) {
        int start = 0;
        int end = s.size() - 1;
        
        while(start < end){
            while (start < end && !Vogal(s[start])){
                start ++;
            }
            
            while (start < end && !Vogal(s[end])){
                end --;
            }
            
            swap(s[start++], s[end--]);
        }
       
       return s;
    }
};