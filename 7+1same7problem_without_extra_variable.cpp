#include<iostream>
using namespace std;
int main()
{
    int row , column;
    while(row<=4)
    {
        column=row;
        while(column<row*2)
        {
            cout<<column<<" ";
            column++;

        }
        cout<<endl;
        row++;
    }

}