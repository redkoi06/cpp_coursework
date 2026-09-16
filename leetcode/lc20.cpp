//
// Created by honglilin on 2026/9/16.
//

#include <iostream>
#include <string>
#include <stack>

char oppositeChar(char c)
{
    if (c == ')') return '(';
    if (c == ']') return '[';
    if (c == '}') return '{';
    return -1;
}

bool isValid(const std::string& s)
{
    std::stack<char> st;
    for (auto c : s)
    {
        if (!st.empty() && st.top() == oppositeChar(c))
        {
            st.pop();
        }else
        {
            st.push(c);
        }
    }
    if (!st.empty())
    {
        return false;
    }
    return true;
}

int main()
{
    std::string s;

    // TODO: 输入

    bool result = isValid(s);

    // TODO: 输出

    return 0;
}