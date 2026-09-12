//
// Created by HONGLI on 2026/9/10.
//

#include <iostream>
using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    Solution solution;

    int num1 = 12;
    int num2 = 5;

    cout << solution.sum(num1, num2) << '\n';

    return 0;
}