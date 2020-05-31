class Solution {
public:
    int balancedStringSplit(string s) {
        // number of times the string got balance make increase the count
        // increase for l and decrease for r
        int maxCount = 0;
        int balanced = 0;
        if(s[0] == 'L') balanced++;
        else balanced--;
        
        for(int i =1;i<s.length();i++){
            if(s[i] == 'L') balanced++;
            else balanced--;
            
            if(balanced == 0)
            {
                maxCount++;
            }
        }
        
        return maxCount;
    }
};
