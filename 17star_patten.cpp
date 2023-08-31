#include <iostream>
using namespace std;
int main()
{
    int n, i = 1,j ;
    cout << "enter any number";
    cin >> n;

    while (i <= n)
    {
        j = n + 1;
        j = j - i;
        while (j >= 1)
        {
            cout << "*"
                 << " ";
            j--;
        }
        cout<<endl;
        i++;
    }
}