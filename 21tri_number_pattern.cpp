#include <iostream>
using namespace std;
int main()
{
    int n = 4, i = 1, j, k, l,m;
    while (i <= n)
    {
        j = n - i;
        

        while (j >= 1)
        {
            cout << "  ";
            j--;
        }
        l=1;
        k=i;
        while(k>=1)
        {
            cout<<l<<" ";
            l++;
            k--;
        }
        l=i-1;
        m=i;
        while(m>1&&l>0)
        {
            cout<<l<<" ";
            l--;
            m--;

        }
        cout<<endl;
        i++;


        
    }
}