#include<iostream>
using namespace std;
int main()
{
    int i=1,j,k,n=4,l=1;
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
            cout<<l<<" ";
            k--;
            l++;

        }
        cout<<endl;
        i++;


    }
}