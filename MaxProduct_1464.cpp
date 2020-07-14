class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = -1;
        int max2 = -1;
        
        if(nums.size() == 2){
            return (nums[0]-1)* (nums[1]-1);
        }
        for(int i = 0; i<nums.size();++i)
        {
            if(nums[i] >=max1)
            {
                max2 = max1;
                max1 = nums[i];
            }
            if(nums[i] < max1 && nums[i] >= max2){
                max2 = nums[i];
            }
        }
        return (max1-1)*(max2-1);
    }
};
