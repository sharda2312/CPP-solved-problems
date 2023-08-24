#include<iostream>
using namespace std;
int main()
{
    int i=1,j,k=4;
    while(i<=4)
    {
        k=k-i;
        j=i;
        while(j>=1)
        {
            cout<<char(65+k)<<" ";
            k++;
            j--;

        }
        cout<<endl;
        i++;


    }
   
    
}