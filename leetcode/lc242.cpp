//
// Created by honglilin on 2026/9/16.
//

#include <iostream>
#include <string>
#include <unordered_map>

bool isAnagram(const std::string& s, const std::string& t)
{
    // TODO: 核心算法
    std::unordered_map<char, int> m;
    for (auto c : t)
    {
        m[c]++;
    }
    for (auto c : s)
    {
        if (m.find(c) != m.end())
        {
            m[c]--;
            if (m[c] == 0)
            {
                m.erase(c);
            }
        }else
        {
            return false;
        }
    }
    if (m.empty())
    {
        return true;
    }
    return false;
}

int main()
{
    std::string s;
    std::string t;

    // TODO: 输入两个字符串

    bool result = isAnagram(s, t);

    // TODO: 输出

    return 0;
}