//
// Created by HONGLI on 2026/9/10.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> fizzBuzz;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                fizzBuzz.push_back("FizzBuzz");
            }else if (i % 5 == 0)
            {
                fizzBuzz.push_back("Buzz");
            }else if (i % 3 == 0)
            {
                fizzBuzz.push_back("Fizz");
            }else
            {
                fizzBuzz.push_back(to_string(i));
            }
        }
        return fizzBuzz;
    }
};

int main() {
    Solution solution;

    int n;

    cin >> n;

    vector<string> answer = solution.fizzBuzz(n);

    for (const string& s : answer) {
        cout << s << ' ';
    }
    cout << '\n';

    return 0;
}