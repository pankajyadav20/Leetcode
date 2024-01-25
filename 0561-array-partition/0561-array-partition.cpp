class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0;
        
        ranges::sort(nums);
        
        for(int i = 0; i < nums.size(); i+=2)
            sum=sum+nums[i];
        
        return sum;
    }
};
