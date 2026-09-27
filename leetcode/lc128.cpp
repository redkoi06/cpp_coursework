//
// Created by HONGLI on 2026/9/23.
//
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

int longestConsecutive(std::vector<int>& nums)
{
    // TODO: 核心算法
    int max = 0;
    std::unordered_set<int> set;
    for (auto num : nums)
    {
        set.insert(num);
    }
    for (auto num : set)
    {
        if (set.find(num - 1) == set.end())
        {
            int len = 1;
            while (set.find(num + 1) != set.end())
            {
                len++;
                num++;
            }
            max = std::max(max, len);
        }
    }
    return max;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> nums(n);

    // TODO: 读取 n 和 nums
    for (auto &num : nums)
    {
        std::cin >> num;
    }

    int result = longestConsecutive(nums);

    // TODO: 输出结果
    std::cout << result;
    return 0;
}
