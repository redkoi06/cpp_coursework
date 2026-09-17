//
// Created by honglilin on 2026/9/17.
//

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

bool isPalindrome(const std::string& s)
{
    // TODO: 核心算法
    std::string ori = s;
    std::string a;
    for (int i = 0; i < s.length(); i++)
    {
        if (isalnum(s[i]))
        {
            a += std::tolower(s[i]);
        }
    }
    std::string b = a;
    std::reverse(b.begin(), b.end());
    if (a == b)
    {
        return true;
    }
    return false;
}

int main()
{
    std::string s;

    // TODO: 使用 std::getline 读取一整行

    // TODO: 调用 isPalindrome

    // TODO: 输出结果

    return 0;
}