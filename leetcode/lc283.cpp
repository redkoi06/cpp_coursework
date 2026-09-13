//
// Created by HONGLI on 2026/9/13.
//

#include <iostream>
#include <vector>

class Solution
{
public:
    void moveZeroes(std::vector<int>& nums)
    {
        // 在这里写
        int index = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                nums[index] = nums[i];
                index++;
            }
        }
        for (int i = index; i < n; i++)
        {
            nums[i] = 0;
        }
    }
};

int main()
{
    Solution solution;

    std::vector<int> nums = {0, 1, 0, 3, 12};

    solution.moveZeroes(nums);

    for (int x : nums)
    {
        std::cout << x << ' ';
    }

    std::cout << '\n';

    return 0;
}