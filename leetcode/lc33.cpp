//
// Created by HONGLI on 2026/10/11.
//
#include <iostream>
#include <vector>

int search(const std::vector<int>& nums, int target)
{
    // TODO: 核心算法
    int n = nums.size();
    int left = 0, right = n - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) return mid;
        if (nums[left] <= nums[mid])
        {
            // 左半有序
            if (target < nums[mid] && target >= nums[left])
            {
                right = mid - 1;
            }else
            {
                left = mid + 1;
            }
        }else
        {
            // 右半有序
            if (target > nums[mid] && target <= nums[right])
            {
                left = mid + 1;
            }else
            {
                right = mid - 1;
            }
        }
    }
    if (nums[left] == target) return left;
    return -1;
}

int main()
{
    int n = 0;
    int target = 8;
    std::vector<int> nums = {4,5,6,7,8,1,2,3};

    // TODO: 读取 n 和 target
    // TODO: 读取 nums
    // TODO: 调用 search
    // TODO: 输出结果

    int a = search(nums, target);

    return 0;
}