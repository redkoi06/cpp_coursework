//
// Created by HONGLI on 2026/9/29.
//
#include <iostream>
#include <vector>

int compress(std::vector<char>& chars)
{
    // TODO: 核心算法
    char cur = chars[0];
    int cnt = 1;
    int index = 1;
    for (;index < chars.size();index++)
    {
        if (chars[index] == cur)
        {
            cnt++;
            chars.erase(chars.begin() + index);
            index--;
            continue;
        }
        cur = chars[index];
        if (cnt == 1)
        {
            cnt = 1;
            continue;
        }
        std::string num = std::to_string(cnt);
        for (auto c : num)
        {
            chars.insert(chars.begin() + index, c);
            index++;
        }
        cnt = 1;
    }
    if (cnt > 1)
    {
        std::string num = std::to_string(cnt);
        for (auto c : num)
        {
            chars.insert(chars.begin() + index, c);
            index++;
        }
    }
    return chars.size();
}

int main()
{
    int n;
    std::vector<char> chars;

    // TODO: 读取 n

    // TODO: 读取 chars

    // TODO: 调用 compress

    // TODO: 输出结果

    return 0;
}