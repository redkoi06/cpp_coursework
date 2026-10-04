//
// Created by HONGLI on 2026/10/4.
//
#include <iostream>
#include <vector>

int minSubArrayLen(int target, const std::vector<int>& nums)
{
    // TODO: 核心算法
    int len = nums.size() + 1;
    int index_1 = 0, index_2 = 1;
    int sum = nums[0];
    while (index_2 < nums.size() + 1)
    {
        if (sum >= target) len = std::min(len, index_2 - index_1);
        while (sum >= target && index_1 < index_2)
        {
            sum -= nums[index_1++];
            if (sum >= target) len = std::min(len, index_2 - index_1);
        }
        if (!(index_2 < nums.size())) break;
        sum += nums[index_2++];
    }
    return len == nums.size() + 1 ? 0 : len;
}

int main()
{
    int n, target;
    std::vector<int> nums;

    // 读取 n 和 target
    std::cin >> n >> target;

    // 读取 nums
    nums.resize(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> nums[i];
    }

    // 调用 minSubArrayLen
    int result = minSubArrayLen(target, nums);

    // 输出结果
    std::cout << result << std::endl;

    return 0;
}
