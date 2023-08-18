#include<iostream>
using namespace std;
int main()
{
    int row=1, column;
    while(row<=3)
    {
        column=1;
        while(column<=3)
        {
            cout<<char(65+row-1)<<" ";
            column++;
        }
        cout<<endl;
        row++;

    }
}