class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int> counts;
        int res = 0;
        int lenght = 0;
        int missing = 0;
        
        for (auto c : chars){
            counts[c]++;
        }
        
        for (auto word : words) {
          map<char, int> curr;
          for(auto x : word){
              curr[x]++;
          }
            
          for (auto c: word){
            if (curr[c] > counts[c]) {
              missing = -1;
              break;
            }
          }
            
          if(missing != -1){ 
              res += word.length();
          }else{
              missing = 0;
          }
        }
        
        return res;
    }
};