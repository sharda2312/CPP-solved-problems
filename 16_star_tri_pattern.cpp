#include <iostream>
using namespace std;
int main()
{
   int i=1,j,k;
   while(i<=4)
   {
    j=i;
    k=i;
    while(j<4)
    {
        cout<<" "<<" ";
        j++;
    }
    while(k>=1)
    {
        cout<<"*"<<" ";
        k--;
    }
    cout<<endl;
    i++;
    
   }
}