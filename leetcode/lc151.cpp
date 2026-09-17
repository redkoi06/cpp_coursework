//
// Created by honglilin on 2026/9/17.
//

#include <iostream>
#include <string>
#include <sstream>

std::string reverseWords(const std::string& s)
{
    // TODO: 核心算法
    std::stack<std::string> st;

    std::istringstream iss(s);
    std::string word;

    while (iss >> word)
    {
        st.push(word);
    }

    std::string result;

    do{
        result += st.top();
        result += " ";
        st.pop();
    }while (!st.empty());

    result.pop_back();

    return result;
}

int main()
{
    std::string s;

    // TODO: 使用 std::getline 读取一整行

    // TODO: 调用 reverseWords

    // TODO: 输出结果

    return 0;
}