//
// Created by HONGLI on 2026/10/4.
//
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <vector>

std::string simplifyPath(const std::string& path)
{
    // TODO: 核心算法
    std::vector<std::string> dirs;
    std::stringstream ss(path);
    std::string s;
    while (std::getline(ss, s, '/'))
    {
        if (s == "." || s == "")
        {
        }
        else if (s == "..")
        {
            if (!dirs.empty())
            {
                dirs.pop_back();
            }
        }else
        {
            dirs.push_back(s);
        }
    }
    std::string res;
    for (const auto d : dirs)
    {
        res.push_back('/');
        res += d;
    }
    if (res.empty())
    {
        res.push_back('/');
    }
    return res;
}

int main()
{
    std::string path;

    // TODO: 读取 path

    // TODO: 调用 simplifyPath

    // TODO: 输出结果

    return 0;
}
