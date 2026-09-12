//
// Created by HONGLI on 2026/9/12.
//

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        // TODO: 在这里写你的代码
        std::vector<int> res;
        int sum = 0;
        for (int i = 0;i < nums.size();i++)
        {
            sum += nums[i];
            res.push_back(sum);
        }
        return res;
    }
};

int main() {
    std::vector<int> nums = {1, 2, 3, 4};

    Solution solution;
    std::vector<int> result = solution.runningSum(nums);

    for (int x : result) {
        std::cout << x << ' ';
    }
    std::cout << '\n';

    return 0;
}