class Solution {
public:
    map<int,int> mp;
    
    int fib(int N) {
        
        if(mp.find(N) != mp.end())
        {
            return mp[N];
        }
        int result;
        if(N<2)
        {
            result = N;
        }else{
            result = fib(N-1)+fib(N-2);
        }
        mp[N] = result;
        return result;
        
    }
};
