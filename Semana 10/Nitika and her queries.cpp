    vector<int> specialXor(int N, int Q, int a[], vector<int> query[])
    {
        vector<int> res;
        vector<int> copied;
        int j = 0;
        
        for(int i=0; i<N; i++){
           copied.push_back(a[i]);
        }
        
        while(j != Q){
            int l = query[j][0] - 1;
            int r = query[j][1];
            vector<int> curr;
            curr = copied;
            
            curr.erase(curr.begin()+l, curr.begin()+r);
            int xors = curr[0];
            
            for(int k=1; k < curr.size(); k++){
                xors = xors ^ curr[k];
            }
            
            res.push_back(xors);    
            j++;
        }
        return res;
    }