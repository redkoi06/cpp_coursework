//
// Created by HONGLI on 2026/9/21.
//
#include <iostream>
#include <string>
#include <unordered_map>

bool canConstruct(const std::string& ransomNote, const std::string& magazine)
{
    // TODO: 核心算法
    std::unordered_map<char, int> mp;
    for (auto c : magazine)
    {
        mp[c]++;
    }
    for (auto c : ransomNote)
    {
        if (mp.find(c) == mp.end() || mp[c] == 0)
        {
            return false;
        }
        mp[c]--;
    }
    return true;
}

int main()
{
    std::string ransomNote;
    std::string magazine;

    // TODO: 读取 ransomNote 和 magazine

    bool result = canConstruct(ransomNote, magazine);

    // TODO: 输出结果

    return 0;
}
