//
// Created by HONGLI on 2026/9/23.
//
#include <iostream>
#include <unordered_map>

bool isHappy(int n)
{
    // TODO: 核心算法
    std::unordered_map<int,bool> mp;
    while (mp.find(n) == mp.end())
    {
        mp[n] = true;
        int num = 0;
        while (n > 0)
        {
            num += (n % 10) * (n % 10);
            n /= 10;
        }
        if (num == 1) return true;
        n = num;
    }

    return false;
}

int main()
{
    int n{};

    // TODO: 读取 n
    std::cin >> n;

    bool result = isHappy(n);

    // TODO: 输出结果
    if (result) return 1;

    return 0;
}
