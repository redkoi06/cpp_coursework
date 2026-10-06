//
// Created by HONGLI on 2026/10/4.
//
#include <iostream>
#include <stack>
#include <string>
#include <sstream>

std::string decodeString(const std::string& s)
{
    // TODO: 核心算法
    enum class Status {unknown, num, string};
    Status status = Status::unknown;
    std::string res;
    std::string tmp;
    std::stack<int> nums;
    std::stack<std::string> strs;
    for (auto c : s)
    {
        if (status == Status::unknown)
        {
            if (c == ']')
            {
                std::string a;
                bool strs_empty = false;
                if (!strs.empty())
                {
                    a = strs.top();
                    strs.pop();
                }else
                {
                    strs_empty = true;
                    a = res;
                }
                int cnt = nums.top();
                if (strs_empty)
                {
                    cnt--;
                }
                nums.pop();
                std::string b;
                while (cnt > 0)
                {
                    b += a;
                    cnt--;
                }
                if (!strs.empty())
                {
                    strs.top() += b;
                }else
                {
                    res += b;
                }
            }else
            {
                tmp += c;
            }
            if (isdigit(c))
            {
                status = Status::num;
            }
            if (isalpha(c))
            {
                status = Status::string;
            }
        }else if (status == Status::string)
        {
            if (isalpha(c))
            {
                tmp += c;
            }
            if (isdigit(c))
            {
                status = Status::num;
                if (nums.empty())
                {
                    res += tmp;
                }
                else if (strs.size() < nums.size())
                {
                    strs.push(tmp);
                }
                else
                {
                    strs.top() += tmp;
                }
                tmp.clear();
                tmp += c;
            }
            if (c == ']')
            {
                status = Status::unknown;
                if (nums.size() == strs.size())
                {
                    strs.top() += tmp;
                }else
                {
                    strs.push(tmp);
                }
                tmp.clear();
                std::string a = strs.top();
                strs.pop();
                int cnt = nums.top();
                nums.pop();
                std::string b;
                while (cnt > 0)
                {
                    b += a;
                    cnt--;
                }
                if (strs.size() == nums.size() && nums.size() > 0)
                {
                    strs.top() += b;
                }else if (strs.size() < nums.size())
                {
                    strs.push(b);
                }else
                {
                    res += b;
                }
            }
        }else if (status == Status::num)
        {
            if (isdigit(c))
            {
                tmp += c;
            }
            if (c == '[')
            {
                nums.push(std::stoi(tmp));
                tmp.clear();
                status = Status::unknown;
            }
        }
    }
    res += tmp;
    return res;
}

int main()
{
    std::string s;

    std::getline(std::cin, s);

    const std::string result = decodeString(s);

    std::cout << result << '\n';

    return 0;
}
