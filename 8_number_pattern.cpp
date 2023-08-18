#include<iostream>
using namespace std;
int main()
{
    int row=1, column;
    while(row<=4)
    {
        column=row;
        while(column>=1)
        {
            cout<<column<<" ";
            column--;

        }
        cout<<endl;
        row++;

    }
}