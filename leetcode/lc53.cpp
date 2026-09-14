//
// Created by HONGLI on 2026/9/14.
//

#include <iostream>
#include <vector>

int maxSubArray(std::vector<int>& nums)
{
    // TODO: 核心逻辑
    int max = nums[0];
    int cur_sum = 0;
    for (int i = 0;i < nums.size();i++)
    {
        int tmp = cur_sum + nums[i];
        if (tmp < 0)
        {
            max = max > tmp ? max : tmp;
            cur_sum = 0;
        }else
        {
            cur_sum = tmp;
            max = tmp > max ? tmp : max;
        }
    }
    return max;
}

int main()
{
    int n;
    // TODO: 读取输入
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0;i < n;i++)
    {
        std::cin >> nums[i];
    }
    // TODO: 调用 maxSubArray
    // TODO: 输出结果
    std::cout << maxSubArray(nums) << '\n';

    return 0;
}