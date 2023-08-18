#include<iostream>
using namespace std;
int main()
{
    int row=1, column,toprint=0;
    while(row<=3)
    {
        column=1;
        while(column<=3)
        {
            cout<<char(65+toprint)<<" ";
            toprint++;
            column++;
        }
        cout<<endl;
        row++;

    }
}