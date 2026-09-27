//
// Created by HONGLI on 2026/9/23.
//
#include <iostream>
#include <string>
#include <vector>
#include <stack>

int cal(int num1, int num2, std::string s)
{
    if (s == "+") return num1 + num2;
    if (s == "-") return num2 - num1;
    if (s == "*") return num1 * num2;
    if (s == "/") return num2 / num1;
    return 0;
}

int evalRPN(std::vector<std::string>& tokens)
{
    // TODO: 核心算法
    int len = tokens.size();
    std::stack<int> st;
    for (int i = 0; i < len; i++)
    {
        if (!std::isdigit(tokens[i][0]) && tokens[i].length() <= 1)
        {
            int num1 = st.top();
            st.pop();
            int num2 = st.top();
            st.pop();
            st.push(cal(num1, num2, tokens[i]));
        }else
        {
            st.push(std::stoi(tokens[i]));
        }
    }
    return st.top();
}

int main()
{
    int n{};


    // TODO: 读取 n 和 tokens
    std::cin >> n;
    std::vector<std::string> tokens(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> tokens[i];
    }

    int result = evalRPN(tokens);

    // TODO: 输出结果
    std::cout << result;
    return 0;
}
