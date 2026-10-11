//
// Created by HONGLI on 2026/10/11.
//
#include <iostream>
#include <vector>

int findMin(const std::vector<int>& nums)
{
    // TODO: 核心算法
    int n = nums.size();
    if (n == 1) return nums[0];
    if (nums[0] < nums[n - 1]) return nums[0];
    int left = 0, right = n - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (mid > left && nums[mid] < nums[mid - 1]) return nums[mid];
        if (mid < right && nums[mid + 1] < nums[mid]) return nums[mid + 1];
        if (nums[mid] > nums[left] || nums[mid] > nums[right])
        {
            left = mid;
        }else
        {
            right = mid;
        }
    }
    return left;
}

int main()
{
    int n = 0;
    std::vector<int> nums = {4,5,6,7,0,1,2};

    // TODO: 读取 n
    // TODO: 读取 nums
    // TODO: 调用 findMin
    // TODO: 输出结果
    std::cout << findMin(nums);

    return 0;
}