#include<iostream>
using namespace std;
int main()
{
    int i=1,j,k,n=4;
    while(i<=n)
    {
        j=n;
        k=i;

        while(j>i)
        {
            cout<<" "<< " ";
            j--;
        }
        while(k>=1)
        {
            cout<<i<<" ";
            k--;

        }
        cout<<endl;
        i++;


    }
}