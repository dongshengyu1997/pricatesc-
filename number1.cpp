#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
给定一个整数数列，找出其中和为特定值的那两个数。

你可以假设每个输入都只会有一种答案，同样的元素不能被重用*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>tuple;
        for(auto m : nums)
        {
            auto it = find(nums.begin(),nums.end(),target - m);
            if(it == nums.end())
            {

            }
            else
            {
                int ends = it - nums.begin();
                auto it1 = find(nums.begin(),nums.end(),m);
                int bengins = it1 - nums.begin();
                tuple.push_back(bengins);
                tuple.push_back(ends);

                return tuple;
            }
        }
    }
};

