//
// Created by HONGLI on 2026/9/21.
//
#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(const std::vector<int>& nums, int target)
{
    // TODO: 核心算法
    std::unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        auto aim = target - nums[i];
        auto it = mp.find(aim);
        if (it != mp.end())
        {
            return std::vector{i, it->second};
        }
        mp[nums[i]] = i;
    }
    return std::vector<int>{};
}

int main()
{
    std::vector<int> nums;
    int target;

    // TODO: 读取 nums 和 target

    // TODO: 调用 twoSum

    // TODO: 输出结果

    return 0;
}
