//
// Created by HONGLI on 2026/9/16.
//

#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> sortedSquares(const std::vector<int>& nums)
{
    int n = nums.size();
    std::vector<int> res(n);
    int index = 0;
    for (int i = 1;i < n; i++)
    {
        if (std::abs(nums[index]) > std::abs(nums[i]))
        {
            index = i;
        }
    }
    int cnt = 0;
    res[cnt++] = nums[index] * nums[index];
    int left = index - 1, right = index + 1;
    while (left >= 0 && right < n)
    {
        if (std::abs(nums[left]) < std::abs(nums[right]))
        {
            res[cnt++] = nums[left] * nums[left];
            left--;
        }else
        {
            res[cnt++] = nums[right] * nums[right];
            right++;
        }
    }
    while (left >= 0)
    {
        res[cnt++] = nums[left] * nums[left];
        left--;
    }
    while (right < n)
    {
        res[cnt++] = nums[right] * nums[right];
        right++;
    }
    return res;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> nums(n);

    // TODO: 输入数组
    for (int i = 0; i < n; i++)
    {
        std::cin >> nums[i];
    }

    std::vector<int> result = sortedSquares(nums);

    // TODO: 输出结果
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << result[i] << " ";
    }

    return 0;
}