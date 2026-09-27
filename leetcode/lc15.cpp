//
// Created by HONGLI on 2026/9/21.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

std::vector<std::vector<int>> threeSum(std::vector<int>& nums)
{
    // TODO: 核心算法
    std::sort(nums.begin(), nums.end());
    std::vector<std::vector<int>> result;
    std::unordered_map<int, int> mp;
    for (auto num : nums)
    {
        mp[num]++;
    }
    int former_i = nums[0] - 1;
    for (int i = 0;i < nums.size();i++)
    {
        if (nums[i] == former_i) continue;
        former_i = nums[i];
        int former_j = nums[i] - 1;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] == former_j) continue;
            former_j = nums[j];
            int aim = - (nums[i] + nums[j]);
            if (aim < nums[j] || mp.find(aim) == mp.end()) continue;
            if (aim == nums[j] && nums[i] == nums[j])
            {
                if (mp[aim] < 3) continue;
                result.push_back(std::vector{nums[i], nums[j], aim});
            }
            else if (aim == nums[j])
            {
                if (mp[aim] < 2) continue;
                result.push_back(std::vector{nums[i], nums[j], aim});
            }
            else if (mp[aim] > 0)
            {
                result.push_back(std::vector{nums[i], nums[j], aim});
            }
        }
    }
    return result;
}

int main()
{
    int n;

    // TODO: 读取 n 和 nums
    std::cin >> n;
    std::vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> nums[i];
    }

    std::vector<std::vector<int>> result = threeSum(nums);

    // TODO: 输出三元组

    return 0;
}
