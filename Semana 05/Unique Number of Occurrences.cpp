class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> freq;
        bool res = false;
        
        for(auto x : arr){
            freq[x]++;
        }
        
        vector<int> curr;
        for(auto &[k,v] : freq){
            curr.push_back(v);
        }
        
        sort(curr.begin(), curr.end());
        int size1 = curr.size();
        
        curr.erase( unique( curr.begin(), curr.end() ), curr.end() );
        int size2 = curr.size();
        
        if(size1 == size2) return true;
        else return false;
        
    }
};