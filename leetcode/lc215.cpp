//
// Created by HONGLI on 2026/9/23.
//
#include <iostream>
#include <vector>
#include <algorithm>

int findKthLargest(std::vector<int>& nums, int k)
{
    // TODO: 核心算法
    std::make_heap(nums.begin(),nums.end());
    for (int i = 0; i < k - 1; i++)
    {
        std::pop_heap(nums.begin(),nums.end());
        nums.pop_back();
    }
    std::pop_heap(nums.begin(),nums.end());
    return nums.back();
}

int main()
{
    int n{};
    int k{};
    std::vector<int> nums;

    // TODO: 读取 n、k 和 nums

    int result = findKthLargest(nums, k);

    // TODO: 输出结果

    return 0;
}
