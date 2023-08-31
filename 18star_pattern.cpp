#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j, k;
    cout<<"enter a number: ";
    cin>>n;
    while (i <= n)
    {
        j = n;
        k = i;
        j = n - i;
        while (k > 1)
        {
            cout << "  ";
            k--;
        }
        while (j >= 0)
        {
            cout << "*"
                 << " ";
            j--;
        }

        cout << endl;
        i++;
    }
}