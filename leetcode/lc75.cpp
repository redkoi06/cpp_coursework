//
// Created by HONGLI on 2026/9/19.
//

#include <iostream>
#include <vector>

void sortColors(std::vector<int>& nums)
{
    // TODO: 核心算法
    std::vector<int> box(3, 0);
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            box[0]++;
        }else if (nums[i] == 1)
        {
            box[1]++;
        }else
        {
            box[2]++;
        }
    }
    int point = 0;
    int index = 0;
    while (point < 3)
    {
        if (box[point] == 0)
        {
            point++;
            continue;
        }
        nums[index++] = point;
        box[point]--;
    }
    return;
}

int main()
{
    std::vector<int> nums;

    // TODO: 读取 nums

    // TODO: 调用 sortColors

    // TODO: 输出结果

    return 0;
}