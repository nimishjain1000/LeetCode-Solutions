class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > vec( numRows);
        
        for(int i = 0;i<numRows; i++)
        {
            vector<int> row;
            for(int j = 0; j<=i; j++)
            {
                int a;
                if(j == 0 || j == i){
                    a = 1;
                   
                }else{
                    a = (vec[i-1][j-1] + vec[i-1][j]);
                   
                }
                cout<<i<<" is "<<a<<" ";
                row.push_back(a);
            }
            
            cout<<endl;
            vec[i] = row;
            
        }
        return vec;
        
    }
};
