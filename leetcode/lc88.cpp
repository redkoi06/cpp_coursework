//
// Created by HONGLI on 2026/9/21.
//
#include <iostream>
#include <vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{
    // TODO: 核心算法
    int p = n - 1, q = m - 1, k = n + m - 1;
    while (p >= 0 && q >= 0)
    {
        if (nums1[p] >= nums2[q])
        {
            nums1[k] = nums1[p];
            k--;
            p--;
        }else
        {
            nums1[k] = nums2[q];
            k--;
            q--;
        }
    }
    while (p >= 0)
    {
        nums1[k] = nums1[p];
        k--;
        p--;
    }
    while (q >= 0)
    {
        nums1[k] = nums2[q];
        k--;
        q--;
    }
}

int main()
{
    int m{};
    int n{};
    std::vector<int> nums1;
    std::vector<int> nums2;

    // TODO: 读取 m、nums1 的前 m 个元素、n 和 nums2

    merge(nums1, m, nums2, n);

    // TODO: 输出合并后的 nums1

    return 0;
}
