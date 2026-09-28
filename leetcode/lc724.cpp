//
// Created by HONGLI on 2026/9/28.
//
#include <iostream>
#include <vector>

int pivotIndex(const std::vector<int>& nums)
{
    // TODO: 核心算法
    int n = nums.size();
    std::vector<int> prefix(n + 2);
    int sum = 0;
    prefix[0] = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        prefix[i + 1] = sum;
    }
    for (int i = 0;i < n;i++)
    {
        int left = prefix[i];
        int right = sum - prefix[i + 1];
        if (left == right) return i;
    }
    return -1;
}

int main()
{
    int n;
    std::vector<int> nums;

    // TODO: 读取 n

    // TODO: 读取 nums

    // TODO: 调用 pivotIndex

    // TODO: 输出结果

    return 0;
}