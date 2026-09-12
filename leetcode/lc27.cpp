//
// Created by HONGLI on 2026/9/12.
//

#include <iostream>
#include <vector>

class Solution
{
public:
    int removeElement(std::vector<int>& nums, int val)
    {
        // TODO: 在这里写
        int cnt = 0;
        int cur_loc = 0;
        for (int i = 0;i < nums.size(); i++)
        {
            if (nums[i] == val)
            {
                continue;
            }
            cnt++;
            nums[cur_loc++] = nums[i];
        }
        return cnt;
    }
};

int main()
{
    std::vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    Solution solution;
    int k = solution.removeElement(nums, val);

    std::cout << "k = " << k << '\n';

    for (int i = 0; i < k; i++)
    {
        std::cout << nums[i] << ' ';
    }

    std::cout << '\n';

    return 0;
}