//
// Created by HONGLI on 2026/10/4.
//
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

std::string frequencySort(const std::string& s)
{
    // TODO: 核心算法
    std::unordered_map<char, int> mp;
    for (const auto& c : s)
    {
        mp[c]++;
    }
    std::vector<std::pair<char, int>> hp;
    for (auto p : mp)
    {
        hp.push_back(std::make_pair(p.first, p.second));
    }
    auto cmp = [](const std::pair<char, int>& a, const std::pair<char, int>& b)
    {
        return a.second < b.second;
    };
    std::make_heap(std::begin(hp), std::end(hp), cmp);
    std::string res;
    while (hp.size() > 0)
    {
        auto p = hp.begin();
        int cnt = p->second;
        char c = p->first;
        while (cnt > 0)
        {
            res.push_back(c);
            cnt--;
        }
        std::pop_heap(std::begin(hp), std::end(hp), cmp);
        hp.pop_back();
    }
    return res;
}

int main()
{
    std::string s;

    std::getline(std::cin, s);

    const std::string result = frequencySort(s);

    std::cout << result << '\n';

    return 0;
}
