//
// Created by HONGLI on 2026/9/29.
//
#include <iostream>
#include <string>


std::string addStrings(const std::string& num1,
                       const std::string& num2)
{
    // TODO: 核心算法
    std::string res;
    int carry = 0;
    int l1 = num1.length() - 1;
    int l2 = num2.length() - 1;
    while (l1 >= 0 && l2 >= 0)
    {
        int sum = num1[l1--] - '0' + num2[l2--] - '0' + carry;
        carry = sum / 10;
        sum = sum % 10;
        res.insert(res.begin(), sum + '0');
    }
    while (l1 >= 0)
    {
        int sum = num1[l1--] - '0' + carry;
        carry = sum / 10;
        sum = sum % 10;
        res.insert(res.begin(), sum + '0');
    }
    while (l2 >= 0)
    {
        int sum = num2[l2--] - '0' + carry;
        carry = sum / 10;
        sum = sum % 10;
        res.insert(res.begin(), sum + '0');
    }
    if (carry)
    {
        res.insert(res.begin(), carry + '0');
    }
    return res;
}

int main()
{
    std::string num1;
    std::string num2;

    // TODO: 读取 num1、num2

    // TODO: 调用 addStrings

    // TODO: 输出结果

    return 0;
}