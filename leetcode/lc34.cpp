//
// Created by honglilin on 2026/9/15.
//

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> searchRange(const std::vector<int>& nums, int target) {
        // TODO: 核心算法
        std::vector<int> result(2);
        int left = 0, right = nums.size() - 1;
        int index = -1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
            {
                index = mid;
                break;
            }
            if (nums[mid] < target)
            {
                left = mid + 1;
            }else
            {
                right = mid - 1;
            }
        }
        if (index == -1)
        {
            return std::vector<int>{-1,-1};
        }
        left = 0, right = index - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
            {
                right = mid - 1;
            }else
            {
                left = mid + 1;
            }
        }
        result[0] = left;
        left = index + 1, right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
            {
                left = mid + 1;
            }else
            {
                right = mid - 1;
            }
        }
        result[1] = right;
        return result;
    }
};

int main() {
    std::vector<int> nums;
    int target;

    // TODO: 读取 nums 和 target

    Solution solution;

    // TODO: 调用 searchRange

    // TODO: 输出结果

    return 0;
}