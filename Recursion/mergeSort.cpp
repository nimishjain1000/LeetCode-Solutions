class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums);
        return nums;
    }
    
    void mergeSort(vector<int>& nums){
        
        if(nums.size()<2)
            return;
        
        int mid = nums.size()/2;
        
        vector<int> sub1;
        vector<int> sub2;
        
        for(int i  = 0;i<mid;i++){
            sub1.push_back(nums[i]);
        }
        
        for(int i = mid; i< nums.size();i++){
            sub2.push_back(nums[i]);
        }
        
        mergeSort(sub1);
        mergeSort(sub2);
        
        nums.clear();
        
        mergeArray(sub1, sub2, nums);
    }
    
    void mergeArray(vector<int>& sub1, vector<int>& sub2 , vector<int>& nums)
    {
        int i = 0, j = 0;
        
        while(i < sub1.size() && j < sub2.size())
        {
            if(sub1[i] <= sub2[j]){
                nums.push_back(sub1[i]);
                i++;
            }else{
                nums.push_back(sub2[j]);
                j++;
            }
            
        }
        
        while(i<sub1.size()){
            nums.push_back(sub1[i]);
                i++;
        }
        
        while(j<sub2.size()){
            nums.push_back(sub2[j]);
                j++;
        }
    }
    
};
