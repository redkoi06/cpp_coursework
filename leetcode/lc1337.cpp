//
// Created by HONGLI on 2026/9/23.
//
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> kWeakestRows(std::vector<std::vector<int>>& mat, int k)
{
    // TODO: 核心算法
    int m = mat.size();
    int n = mat[0].size();
    std::vector<std::pair<int, int>> cnt(m);
    for (int i = 0; i < m; i++)
    {
        cnt[i].first = i;
    }
    for (int i = 0; i < m; i++)
    {
        auto it = std::find(mat[i].begin(), mat[i].end(), 0);
        if (it == mat[i].end())
        {
            cnt[i].second = n;
        }else
        {
            cnt[i].second = it - mat[i].begin();
        }
    }
    std::sort(cnt.begin(), cnt.end(), [](std::pair<int, int> a, std::pair<int, int> b)
        {
            if (a.second == b.second)
            {
                return a.first < b.first;
            }
            return a.second < b.second;
        });
    std::vector<int> res;
    for (int i = 0; i < k; i++)
    {
        res.push_back(cnt[i].first);
    }

    return res;
}

int main()
{
    int m{};
    int n{};
    int k{};
    std::vector<std::vector<int>> mat;

    // TODO: 读取行数、列数、k 和矩阵内容

    std::vector<int> result = kWeakestRows(mat, k);

    // TODO: 输出行下标

    return 0;
}
