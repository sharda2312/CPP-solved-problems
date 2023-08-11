#include <iostream>
using namespace std;
int main()

{
    int num, i = 2, sum = 0;
    cout << "enter the number: ";
    cin >> num;
    while (i <= num)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }

        i = i + 1;
    }
    cout << sum;
}
