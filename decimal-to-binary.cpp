#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int decimal = 10,x,i=0,binary=0;
    

    for (;decimal!=0;i++ )
    {
       x=decimal&1;
       binary=x*pow(10,i)+binary;
       
       decimal = decimal>>1;
    }
     cout << binary;
}   