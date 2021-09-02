class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map <int, int> freq1;
        map <int, int> freq2;
        vector<int> res;
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        
        for(auto x : nums1){
            freq1[x]++;
        }
        
        for(auto y : nums2){
            freq2[y]++;
        }
        
        if(n1 > n2){
            for(auto n : nums1){
                if(freq1[n] > 0 && freq2[n] > 0){
                    res.push_back(n);
                }
            }
        }else{
            for(auto n : nums2){
                if(freq1[n] > 0 && freq2[n] > 0){
                    res.push_back(n);
                }
            }            
        }
        
        sort( res.begin(), res.end() );
        res.erase( unique( res.begin(), res.end() ), res.end() );
        return res;
        
        
        
    }
};