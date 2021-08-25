typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef set<int> si;

class Solution {
public:

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector <int>> res;
        sort(nums.begin(), nums.end());
        
        do{
            res.push_back(nums);
        }while(next_permutation(nums.begin(), nums.end()));
            
        
        return res;
        
    }
};