//
// Created by HONGLI on 2026/10/11.
//
#include <iostream>
#include <vector>
#include <algorithm>

int findMinArrowShots(std::vector<std::vector<int>>& points)
{
    // TODO: 核心算法
    std::sort(points.begin(), points.end(),
        [](const auto& a, const auto& b)
        {
            return a[1] < b[1];
        });
    int cnt = 1;
    int index = points[0][1];
    for (auto &a : points)
    {
        if (a[0] <= index) continue;
        cnt++;
        index = a[1];
    }
    return cnt;
}

int main()
{
    int n = 0;
    std::vector<std::vector<int>> points;

    // TODO: 读取 n

    // TODO: 读取 points

    // TODO: 调用 findMinArrowShots

    // TODO: 输出结果

    return 0;
}