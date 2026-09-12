//
// Created by HONGLI on 2026/9/12.
//

#include <iostream>
#include <vector>

class Solution
{
public:
    int removeDuplicates(std::vector<int>& nums)
    {
        // TODO: 在这里写
        int cur = nums[0];
        int cur_loc = 1;
        for (int i = 1;i < nums.size();i++)
        {
            if (nums[i] == cur)
            {
                continue;
            }
            nums[cur_loc] = nums[i];
            cur = nums[i];
            cur_loc++;
        }
        return cur_loc;
    }
};

int main()
{
    std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    Solution solution;
    int k = solution.removeDuplicates(nums);

    std::cout << "k = " << k << '\n';

    for (int i = 0; i < k; i++)
    {
        std::cout << nums[i] << ' ';
    }

    std::cout << '\n';

    return 0;
}