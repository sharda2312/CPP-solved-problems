#include <iostream>
using namespace std;
int main()
{
    int num, i = 1, sum = 0;
    cout << "enter the number ";
    cin >> num;
    while (i <= num)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "sum: " << sum;
}