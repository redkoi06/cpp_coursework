//
// Created by HONGLI on 2026/10/11.
//
#include <iostream>
#include <vector>
#include <algorithm>

int eraseOverlapIntervals(std::vector<std::vector<int>>& intervals)
{
    // TODO: 核心算法
    std::sort(intervals.begin(), intervals.end(),
        [](const auto &a, const auto &b)
        {
            return a[1] < b[1];
        });
    int save = 1;
    int index = intervals[0][1];
    for (auto &a : intervals)
    {
        if (a[0] < index) continue;
        save++;
        index = a[1];
    }
    return intervals.size() - save;
}

int main()
{
    int n = 0;
    std::vector<std::vector<int>> intervals;

    // TODO: 读取 n

    // TODO: 读取 intervals

    // TODO: 调用 eraseOverlapIntervals

    // TODO: 输出结果

    return 0;
}