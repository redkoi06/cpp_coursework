#include<iostream>
#include<cmath>

int main(void){
    int n;
    double w;
    std::cin >> n >> w;
    long long r1, r2;
    if(w <= 1){
        r1 = 8 * n;
    }else{
        r1 = (8 + 2 * (long long)std::ceil((w - 1) / 0.5)) * n;
    }

    if(n * w <= 3){
        r2 = 18;
    }else{
        r2 = 18 + 3 * (long long)std::ceil(n * w - 3);
    }

    std::cout << r1 << ' ' << r2 << ' ' << (r1 <= r2 ? 1 : 2) << '\n';
    return 0;
}