class Solution {
public:
    int makeNum(vector<int> digits, int x)
    {
        int p = 10;
        int number = 0;
        digits[x] = 9;
        for(int i  = 0;i<digits.size();i++)
        {
            int exp = pow(p, i);
            number += digits[i]*exp;
        }
        return number;
    }
    int maximum69Number (int num) {
        
        int n = num;
        int temp = num;
        int max = num;
        vector<int> digits;
        while(n)
        {
            int r = n%10;
            digits.push_back(r);
            n = n/10;
        }
        for(int i = 0 ;i<digits.size(); i++){
            
            if(digits[i] == 6){
                temp = makeNum(digits, i);
                if(temp > max){
                    max  = temp;
                }
            }
        }
        return max;
    }
};
