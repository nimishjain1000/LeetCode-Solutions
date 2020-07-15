class Solution {
    map<long long ,long long> mp;
public:
    int climbStairs(int N) {
        if(mp.find(N) != mp.end())
        {
            return mp[N];
        }
        long long result;
       
        if(N < 2 )
        {
            result = 1;
            
        }
        else if(N == 2)
        {
            result = N;
            
        }
        else{
            result = long(climbStairs(N-1))+long(climbStairs(N-2)); // because we can reach n from n-1 and n-2
        }
        mp[N] = result;
        return result;
    }
};
