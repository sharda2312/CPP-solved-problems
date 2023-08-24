#include<iostream>
using namespace std;
int main()
{
    int row=1, column,toprint;
    while(row<=4)
    {
        column=1;
        toprint=row;
        while(column<=row)
        {
            cout<<char(65+toprint-1)<<" ";
            toprint++;
            column++;
        }
        cout<<endl;
        row++;

    }
}