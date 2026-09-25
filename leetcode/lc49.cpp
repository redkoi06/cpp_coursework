//
// Created by HONGLI on 2026/9/21.
//
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs)
{
    // TODO: 核心算法
    int n = strs.size();
    std::vector<std::string> ordered(n);
    for (int i = 0;i < n;i++)
    {
        auto str = strs[i];
        std::sort(str.begin(), str.end());
        ordered[i] = str;
    }
    std::unordered_map<std::string, std::vector<int>> mp;
    for (int i = 0;i < n;i++)
    {
        auto it = mp.find(ordered[i]);
        if (it == mp.end())
        {
            mp[ordered[i]].push_back(i);
        }else
        {
            it->second.push_back(i);
        }
    }
    std::vector<std::vector<std::string>> result;
    for (const auto&p : mp)
    {
        std::vector<std::string> res;
        for (const auto&v : p.second)
        {
            res.push_back(strs[v]);
        }
        result.push_back(res);
    }
    return result;
}

int main()
{
    int n{};
    std::vector<std::string> strs;

    // TODO: 读取 n 和 n 个字符串

    std::vector<std::vector<std::string>> result = groupAnagrams(strs);

    // TODO: 输出分组结果

    return 0;
}
