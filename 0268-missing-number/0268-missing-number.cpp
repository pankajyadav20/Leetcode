class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
          int xorr1 = 0, xorr2 = 0;
        
        for(int i = 1;i<=n;i++) xorr1^=i;
        for(int i = 0;i<n;i++) xorr2^=arr[i];
        
        cout<<xorr1<<" "<<xorr2<<endl;
        
        
        return xorr1^xorr2;
    }
};