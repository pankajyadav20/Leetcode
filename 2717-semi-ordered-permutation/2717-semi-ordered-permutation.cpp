class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int a,b;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                a=i;
                
            }
            else if (nums[i]==n){
                b=i;
            }
            
        }
        int ans=a+n-1-b;
        if(b<a){
            ans--;
        }
        return ans;
    }
};