//
// Created by honglilin on 2026/9/15.
//

#include <iostream>
#include <vector>

class Solution {
public:
    int search(const std::vector<int>& nums, int target) {
        // TODO: 核心算法
        int left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            if (nums[mid] < target)
            {
                left = mid + 1;
            }else
            {
                right = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    std::vector<int> nums;
    int target;

    // TODO: 读取 nums 和 target


    Solution solution;

    // TODO: 调用 search

    // TODO: 输出结果

    return 0;
}