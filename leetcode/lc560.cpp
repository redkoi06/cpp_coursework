//
// Created by HONGLI on 2026/9/28.
//
#include <iostream>
#include <vector>
#include <unordered_map>

int subarraySum(const std::vector<int>& nums, int k)
{
    // TODO: 核心算法
    int res = 0;
    std::vector<int> v;
    std::unordered_map<int, std::vector<int>> mp;
    int sum = 0;
    v.push_back(0);
    mp[0].push_back(0);
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        v.push_back(sum);
        mp[sum].push_back(i + 1);
        if (nums[i] == k)
        {
            res++;
        }
    }
    for (int i = 0;i < nums.size() + 1;i++)
    {
        int aim = k + v[i];
        auto it = mp.find(aim);
        if (it == mp.end()) continue;
        int index = it->second.size() - 1;
        while (index >= 0 && it->second[index] > i + 1)
        {
            res++;
            index--;
        }
    }
    return res;
}

int main()
{
    int n, k;
    std::vector<int> nums;

    // 读取 n 和 k
    std::cin >> n >> k;

    // 读取 nums
    nums.resize(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> nums[i];
    }

    // 调用 subarraySum
    int result = subarraySum(nums, k);

    // 输出结果
    std::cout << result << std::endl;

    return 0;
}