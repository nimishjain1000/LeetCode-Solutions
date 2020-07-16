class Solution {
public:
    int kthGrammar(int N, int k) {
        
        if(N == 1) return 0;
        if(N == 2) return k-1;
        
        int val  = kthGrammar(N-1, ceil(k/2.0));
        
        if(val == 1){
            if(k%2!=0){
                return 1;
            }else{
                return 0;
            }
        }else{
            if(k%2!=0){
                return 0;
            }else{
                return 1;
            }
        }
    }
};
