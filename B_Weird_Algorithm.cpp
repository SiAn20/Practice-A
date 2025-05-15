#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    std::cin >> n;
    while (n != 1) {
        std::cout << n << " ";
        if (n % 2 != 0) {
            n = n * 3 + 1;
        } else {
            n = n / 2;
        }
    }
    std::cout << 1;
    return 0;
}