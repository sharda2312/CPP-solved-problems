#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num = 254, x, rnum = 0, i = 0;

    for (; num != 0; i++) {
        x = num % 10;
        num = num / 10;
        rnum = x * pow(10, i) + rnum;
    }

    cout << rnum;
}