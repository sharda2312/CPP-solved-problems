#include <iostream>
using namespace std;
int main()
{
    int i = 9, j;
    while (i >= 1)
    {
        j = 1;

        while (j <= 3)
        {
            cout << i << " ";
            j++;
            i--;
        }
        cout << endl;
    }
}