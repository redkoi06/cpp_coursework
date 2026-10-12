//
// Created by HONGLI on 2026/10/12.
//
#include <iostream>
#include <vector>
#include <algorithm>

void rotate(std::vector<int>& nums, int k)
{
    // TODO: 核心算法
    k %= nums.size();

    std::reverse(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.begin() + k);
    std::reverse(nums.begin() + k, nums.end());
}

int main()
{
    int n, k;
    std::vector<int> nums;

    // TODO: 读取 n 和 k
    // TODO: 读取 nums
    // TODO: 调用 rotate
    // TODO: 输出 nums

    return 0;
}