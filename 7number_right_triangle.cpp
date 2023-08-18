#include <iostream>
using namespace std;
int main()
{
    int row = 1, column, num;
    while (row <= 4)
    {
        num = 1;
        column = row;
        while (num <= row)
        {
            cout << column<<" ";
            num++;
            column++;
        }
        cout<<endl;
        row++;
    }
}
