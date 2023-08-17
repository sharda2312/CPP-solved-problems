#include<iostream>
using namespace std;
int main()
{
    int i=1,j;
    while(i<=4)
    {
        j=1;
        while(j<=i)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}