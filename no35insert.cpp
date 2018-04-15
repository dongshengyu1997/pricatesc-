/*给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

你可以假设数组中无重复元素。*/ 
int searchInsert(vector<int>& nums, int target) {
        vector<int>::iterator it = find(nums.begin(),nums.end(),target);
        if(it != nums.end())
        {
            return std::distance(std::begin(nums), it);
        }
        else
        {
            if(*nums.begin() > target)
                return 0;
            if(*(nums.end() - 1) < target)
                return nums.size();
            for(int i = 0;i < nums.size();i++)
            {
                if(nums[i] < target && nums[i+1] > target)
                    return i+1;
            }
        }
    }
