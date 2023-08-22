#include<iostream>
using namespace std;
int main()
{
    int row=1, column,toprint=0;
    while(row<=4)
    {
        column=1;
        while(column<=row)
        {
            cout<<char(65+toprint)<<" ";
            toprint++;
            column++;
        }
        cout<<endl;
        row++;

    }
}