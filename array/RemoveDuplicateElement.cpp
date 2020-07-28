class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int newLen = 1;
        if(nums.size() == 0) return 0;
        int checkElement = nums[0];
        
        for(int i =1;i<nums.size(); i++)
        {
            if(nums[i] != checkElement)
            {
                nums[newLen] = nums[i];
                newLen++;
                checkElement = nums[i];
            }
        }
        return newLen;
    }
};
