//
// Created by HONGLI on 2026/10/4.
//
#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>

double findMaxAverage(const std::vector<int>& nums, int k)
{
    // TODO: 核心算法
    int n = nums.size();
    int index = 0;
    int sum = 0;
    for (int i = 0;i < k;i++)
    {
        sum += nums[i];
    }
    double maxAvg = (double)sum / k;
    for (int i = k;i < n;i++)
    {
        sum += -nums[i - k] + nums[i];
        double avg = (double)sum / k;
        maxAvg = std::max(maxAvg, avg);
    }
    return maxAvg;
}

int main()
{
    int n, k;
    std::vector<int> nums;

    // TODO: 读取 n、k

    // TODO: 读取 nums

    // TODO: 调用 findMaxAverage

    // TODO: 输出结果

    return 0;
}
