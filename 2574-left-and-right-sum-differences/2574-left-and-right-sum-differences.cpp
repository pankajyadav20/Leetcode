class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int ls=0;
        int rs=0;
        for(int i=0;i<n;i++){
            rs+=nums[i];
        }
        for(int i=0;i<n;i++){
            rs-=nums[i];
            ans.push_back(abs(ls-rs));
            ls+=nums[i];
        }
        return ans;
    }
};