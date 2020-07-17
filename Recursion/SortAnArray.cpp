class Solution {
public:
    void insert(vector<int>& nums, int val)
    {
        if(nums.size() == 0 || nums[nums.size()-1] <=val){
            nums.push_back(val);
            return;
        }
        
        int temp = nums[nums.size()-1];
        nums.pop_back();
        insert(nums, val);
        nums.push_back(temp);
    }
    void sortA(vector<int>& nums)
    {
        if(nums.size() < 2) return;
        
        int val = nums[nums.size()-1];
        nums.pop_back();
        sortA(nums);
        insert(nums, val);
    }
    vector<int> sortArray(vector<int>& nums) {
        
        sortA(nums);
        
        return nums;
    }
};

// not suitable for large array
