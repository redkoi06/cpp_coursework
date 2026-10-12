//
// Created by HONGLI on 2026/10/12.
//
#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>

bool wordPattern(const std::string& pattern, const std::string& s)
{
    // TODO: 核心算法
    std::unordered_map <char, std::string> pat;
    std::unordered_map <std::string, char> rev;
    std::stringstream ss(s);
    std::string word;
    int index = 0;
    int cnt = 0;
    while (ss >> word)
    {
        cnt++;
        char c = pattern[index++];
        if (pat.find(c) == pat.end())
        {
            if (rev.find(word) != rev.end())
            {
                return false;
            }
            pat[c] = word;
            rev[word] = c;
        }else
        {
            if (pat[c] != word)
            {
                return false;
            }
        }
    }
    if (cnt != pattern.size()) return false;
    return true;
}

int main()
{
    std::string pattern = "abba";
    std::string s = "dog cat cat fish";

    // TODO: 读取 pattern 和 s
    // TODO: 调用 wordPattern
    // TODO: 输出结果
    wordPattern(pattern, s);

    return 0;
}