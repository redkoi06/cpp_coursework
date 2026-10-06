//
// Created by HONGLI on 2026/10/4.
//
#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

std::vector<std::string> topKFrequent(const std::vector<std::string>& words,
                                      int k)
{
    // TODO: 核心算法
    std::unordered_map<std::string, int> mp;
    for (const auto& w : words)
    {
        mp[w]++;
    }

    auto cmp = [](const std::pair<int, std::string>& a, const std::pair<int, std::string>& b)
    {
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        return a.first < b.first;
    };
    std::vector<std::pair<int, std::string>> hp;
    for (const auto& p : mp)
    {
        hp.push_back(std::pair<int, std::string>(p.second, p.first));
    }
    std::make_heap(std::begin(hp), std::end(hp), cmp);
    std::vector<std::string> res(k);
    for (int i = 0;i < k;i++){
        res[i] = hp.front().second;
        std::pop_heap(std::begin(hp), std::end(hp), cmp);
        hp.pop_back();
    }
    return res;
}

int main()
{
    int n, k;
    std::vector<std::string> words;

    // TODO: 读取 n、k

    // TODO: 读取 words

    // TODO: 调用 topKFrequent

    // TODO: 输出结果

    return 0;
}
