class Solution {
public:
    
    vector<string> readBinaryWatch(int turnedon){
        vector<string> res;
        
        for(int i=0;i<12;i++){
            bitset<4> horas(i);
            
            for(int j=0;j<60;j++){
                bitset<6> minutos(j);
                
                if( (horas.count() + minutos.count()) == turnedon){
                    string hr = to_string(i);
                    string mint;
                    
                    if(j < 10){
                        mint = ":0";
                    }else{
                        mint = ":";
                    }
                    
                    mint = mint + to_string(j);
                    
                    res.push_back(hr+mint);
                }
            }
        }
        
        return res;
    }
};