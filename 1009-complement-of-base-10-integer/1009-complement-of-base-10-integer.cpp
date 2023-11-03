class Solution {
public:
    int bitwiseComplement(int n) {
       int m=n;
       int count=0;
        if(n==0)
            return 1;
        while(m!=0){
            count =(count << 1) | 1;
            m= m >> 1;
        }
        int ans = (~n) & count;
        return ans;
        
    }
};