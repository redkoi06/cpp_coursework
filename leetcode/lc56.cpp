//
// Created by HONGLI on 2026/9/19.
//

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> merge(
    std::vector<std::vector<int>>& intervals)
{
    // TODO: 核心算法
    std::sort(intervals.begin(), intervals.end());
    int left = intervals[0][0], right = intervals[0][1];
    std::vector<std::vector<int>> res;
    for (int i = 0;i < intervals.size();i++)
    {
        if (right < intervals[i][0])
        {
            res.push_back(std::vector<int>{left, right});
            left = intervals[i][0], right = intervals[i][1];
        }
        else if (right < intervals[i][1])
        {
            right = intervals[i][1];
        }
    }
    res.push_back(std::vector<int>{left, right});
    return res;
}

int main()
{
    std::vector<std::vector<int>> intervals;

    // TODO: 读取 intervals

    // TODO: 调用 merge

    // TODO: 输出结果

    return 0;
}