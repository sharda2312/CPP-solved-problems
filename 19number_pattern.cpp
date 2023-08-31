#include<iostream>
using namespace std;
int main()
{
    int i=1,j,k,n=15;
    while(i<=n)
    {
        j=i;
        k=n-i;

        while(j>1)
        {
            cout<<" "<< " ";
            j--;
        }
        while(k>=0)
        {
            cout<<i<<" ";
            k--;

        }
        cout<<endl;
        i++;


    }
}