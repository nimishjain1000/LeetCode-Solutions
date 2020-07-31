class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        vector<int> res;
        int n  = nums.size();
        for(int i =0;i<n; i++)
        {
            int s = target - nums[i];
            if(mp.find(s) != mp.end() && mp[s] != i)
            {
                res.push_back(i);
                res.push_back(mp[s]);
                
                break;
            }
            mp[nums[i]] = i;//target - nums[i];
        }
        
//         for(int i =0;i<n;i++)
//         {
//             int s = target - nums[i];
//             if(mp.find(s) != mp.end() && mp[s] != i)
//             {
//                 res.push_back(i);
//                 res.push_back(mp[s]);
                
//                 break;
//             }
//         }
        return res;
    }
};
