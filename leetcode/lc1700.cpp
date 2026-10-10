//
// Created by HONGLI on 2026/10/4.
//
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

int countStudents(std::vector<int>& students,
                  std::vector<int>& sandwiches)
{
    // TODO: 核心算法
    int n = students.size();
    int num_0 = 0, num_1 = 0;
    for (auto &student : students)
    {
        if (student == 0) num_0++;
        if (student == 1) num_1++;
    }
    for (int i = 0;i < n;i++)
    {
        if (sandwiches[i] == 0 && num_0 > 0)
        {
            num_0--;
        }
        else if (sandwiches[i] == 1 && num_1 > 0)
        {
            num_1--;
        }else
        {
            break;
        }
    }
    return num_0 + num_1;
}

int main()
{
    int n;
    std::vector<int> students;
    std::vector<int> sandwiches;

    // TODO: 读取 n

    // TODO: 读取 students

    // TODO: 读取 sandwiches

    // TODO: 调用 countStudents

    // TODO: 输出结果

    return 0;
}
