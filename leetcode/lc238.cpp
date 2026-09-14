//
// Created by HONGLI on 2026/9/14.
//

#include <iostream>
#include <vector>

std::vector<int> productExceptSelf(std::vector<int>& nums)
{
    // TODO: 核心逻辑
    int n = nums.size() ;
    std::vector<int> res(n, 1);
    int left = 1, right = 1;
    for (int i = 0; i < n; i++)
    {
        res[i] *= left;
        res[n - i - 1] *= right;
        left *= nums[i];
        right *= nums[n - i - 1];
    }


    // std::vector<int> front(n + 1);
    // std::vector<int> end(n + 1);
    // int front_sum = 1, end_sum = 1;
    // front[0] = end[0] = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     front_sum *= nums[i];
    //     end_sum *= nums[n - i - 1];
    //     front[i + 1] = front_sum;
    //     end[i + 1] = end_sum;
    // }
    // std::vector<int> res(n);
    // for (int i = 0; i < n; i++)
    // {
    //     res[i] = front[i] * end[n - i - 1];
    // }
    return res;
}

int main()
{
    int n;
    std::vector<int> nums;

    // TODO: 读取输入

    // TODO: 调用 productExceptSelf

    // TODO: 输出结果

    return 0;
}