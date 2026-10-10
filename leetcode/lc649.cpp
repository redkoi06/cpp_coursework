//
// Created by HONGLI on 2026/10/4.
//
#include <iostream>
#include <queue>
#include <string>

std::string predictPartyVictory(std::string& senate)
{
    // TODO: 核心算法
    int n = senate.length();
    int cnt_R = 0, cnt_D = 0;
    for (auto c : senate)
    {
        if (c == 'R')
        {
            cnt_R++;
        }
        if (c == 'D')
        {
            cnt_D++;
        }
    }
    int to_kill_R = 0, to_kill_D = 0;
    int index = 0;
    for (;cnt_R > 0 && cnt_D > 0;index = (index + 1) % n)
    {
        if (senate[index] == '-') continue;
        if (senate[index] == 'R')
        {
            if (to_kill_R > 0)
            {
                to_kill_R--;
                cnt_R--;
                senate[index] = '-';
                continue;
            }
            to_kill_D++;
        }
        if (senate[index] == 'D')
        {
            if (to_kill_D > 0)
            {
                to_kill_D--;
                cnt_D--;
                senate[index] = '-';
                continue;
            }
            to_kill_R++;
        }
    }
    return cnt_R > 0 ? "Radiant" : "Dire";
}

int main()
{
    std::string senate;

    // TODO: 读取 senate

    // TODO: 调用 predictPartyVictory

    // TODO: 输出结果

    return 0;
}
