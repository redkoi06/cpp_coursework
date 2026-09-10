#include<iostream>

int main(){
    int highest = 0;
    int highest_index = 0;
    int unexcute = 0;
    char op;
    int p_cnt;
    int c, n;

    std::cin >> c >> n;
    for(int i = 1;i <= n;i++){
        std::cin >> op;
        if(op == 'I'){
            int p;
            std::cin >> p;
            if(p + p_cnt > c){
                unexcute++;
                continue;
            }
            p_cnt += p;
            if(p_cnt > highest){
                highest = p_cnt;
                highest_index = i;
            }
        }else if(op == 'O'){
            int p;
            std::cin >> p;
            if(p > p_cnt){
                unexcute++;
                continue;
            }
            p_cnt -= p;
        }else{
            return -1;
        }
    }
    std::cout << p_cnt << ' ' << highest << ' ' << highest_index << ' ' << unexcute << '\n';
    return 0;
}