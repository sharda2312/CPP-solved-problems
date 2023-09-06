#include <iostream>
using namespace std;
int main()
{
    int n = 9, i = 1, j, k, l, m;
    while (i <= n)
    {
        k = 1;
        j = n - i;
        while (j >= 0)
        {
            cout << k << " ";
            k++;
            j--;
        }
        l = i;
        while (l > 1)
        {
            cout << "* *"
                 << " ";
            l--;
        }
        m = n - i;
        k = (n-i)+1;
        while (m >= 0)
        {
            cout << k << " ";
            k--;
            m--;
        }

        cout << endl;
        i++;
    }
}