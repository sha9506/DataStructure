class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
          int val=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(target==nums[i])
            {
                val= i;
            }
            else if(target>nums[i])
            {
                val=i+1;
            }
            else if(target<nums[i])
            {
                break;
            }
        }
        return val;
    }
};