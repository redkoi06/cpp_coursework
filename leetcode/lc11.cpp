//
// Created by HONGLI on 2026/9/16.
//

#include <iostream>
#include <vector>
#include <algorithm>

int maxArea(const std::vector<int>& height)
{
    int maxArea = 0;
    int left = 0;
    int right = height.size() - 1;
    while (left < right)
    {
        int area = std::min(height[left], height[right]) * (right - left);
        maxArea = std::max(maxArea, area);
        if (height[left] < height[right])
        {
            left = left + 1;
        }else
        {
            right = right - 1;
        }
    }
    return maxArea;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> height(n);

    // TODO: 输入高度

    int result = maxArea(height);

    // TODO: 输出结果

    return 0;
}