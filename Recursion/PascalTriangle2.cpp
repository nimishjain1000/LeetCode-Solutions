class Solution {
public:
   
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        res.push_back(1);
        if(rowIndex == 0)
        {
            
            return res;
        }
        
         vector<int> prev = getRow(rowIndex-1);
         
         for(int i = 1;i< rowIndex;i++){
             res.push_back(prev[i-1]+prev[i]);
         }
        res.push_back(1);
        return res;
        
    }
};
