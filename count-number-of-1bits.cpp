#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter the bits" << endl;
    cin >> n;
    
    while (n != 0) {
        if (n & 1) {
            count++;
        }
        n = n >> 1;
    }
    
    cout << "Total number of 1 bits: " << count;
    return 0;
}
