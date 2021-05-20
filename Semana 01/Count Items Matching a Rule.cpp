// find the description on: https://leetcode.com/problems/count-items-matching-a-rule/

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int size_vec = items.size();
        int total = 0;
        int j = 0;
        
        for(int i = 0; i < size_vec; i++){
            if(ruleKey == "type"){
                for(j; j < size_vec; j++){
                    if(items[j][0] == ruleValue) total++;
                }
                break;
            }
            else if(ruleKey == "color"){
                for(j; j < size_vec; j++){
                    if(items[j][1] == ruleValue) total++;
                }
                break;
            }
            else{
                for(j; j < size_vec; j++){
                    if(items[j][2] == ruleValue) total++;
                }
                break;
            }
        }
        
        return total;
    }
};

