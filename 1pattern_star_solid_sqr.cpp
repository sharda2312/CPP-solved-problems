#include <iostream>
using namespace std;
int main()
{
    int i = 1, j;
    while (i <= 4)
    {
        j = 1;
        while (j <= 4)
        {
            cout << "* ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}